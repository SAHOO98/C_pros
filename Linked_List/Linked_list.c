#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define AND &&
#define NewNode (Node*)malloc(sizeof(Node))

typedef struct node {
  int x;
  struct node *next;
} Node;

Node *head,*current;

void create(int x){
  printf("Creating..\n");
  head = NewNode;
  head->x = x;
  head->next = NULL;
  current = head;
}

void push(int x){
  Node *t;
  t = NewNode;
  t->x  = x;
  t->next = current;
  current = t;

}

void show(){
  printf("%s\n","Printing.." );
  Node *t;
  t = current;
  do{
    if (t->next != NULL)
    printf("%d->",t->x);
    else
    printf("%d\n",t->x);
    t = t->next;
  }while (t!=NULL);
  puts("\n");
}
//split fuction
//usage:-splits string on the bais of delimator
//return:- array of split strings
char** split(char* in,char delim ,int * len){
  char **out,*x,*y,temp[strlen(in)];
  int space,i,j;
  space = 0;
  y = x = in;
   for(;*x!='\0';x++){
     if (*x == delim)
      space++;
   }
   space++;
    *len = space;
   out = (char**)malloc(space*sizeof(char *));
   for(i =0;i<space;i++){
     out[i] = (char*)malloc(strlen(in)*sizeof(char));
   }
   i = 0;
   j = 0;
   while(1){
     if (*y!=delim AND *y!='\0'){
       temp[i] = *y;
       i++;
     }else{
       temp[i] = '\0';
       strcpy(out[j],temp);
       j++;i=0;
       if(*y=='\0')
       break;
     }
     y++;
   }
  return out;
}

void command_process(char *h){
  char ar[strlen(h)],**sliced_input;
  printf("%d\n",strlen(h));
  int len=0;
  char *cmds[]={"create","insert","show"};
  //puts("check!!");
  strcpy(ar,h);
  //puts("check!!");
  ar[strlen(h)-1] = '\0';
  sliced_input = split(ar,' ',&len);
  puts(sliced_input[0]);
  //puts(sliced_input[1]);
  if (strcmp(sliced_input[0],cmds[0])==0){
    puts(sliced_input[0]);
  }else if(strcmp(sliced_input[0],cmds[1])==0){
    puts(sliced_input[0]);
    puts(sliced_input[1]);

  }else if(strcmp(sliced_input[0],cmds[2])==0){
    puts(sliced_input[0]);

  }

}
int main() {
  int x,y = 1,ch;
  char *help  = "1:-Create\n2:-Insert at rear end\n3:-Show the list";
  char inp[20];
  puts(help);
  while (1){
    printf(">>");
    fgets(inp,10,stdin);
    fflush(stdin);
    command_process(inp);
  }
  /*while (y==1) {
    puts("1:-Create\n2:-Insert at rear end\n3:-Show the list");
    scanf("%d",&ch);
    switch (ch) {
      case 1:
      printf("Enter a number:-\n");
      scanf("%d",&x);
      create(x);
      break;

      case 2:
      puts("Enter a number:-\n");
      scanf("%d",&x);
      push(x);
      break;

      case 3:
      print();
      break;

      default:
      puts("Wrong Input!!");
    }
    puts("Enter 1 to continue, 0 to end:-\n");
    scanf("%d",&y);
  }*/
  return 0;
}
