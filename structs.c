#include <stdio.h>
#include <stdlib.h>
#define newNode (Node*)malloc(sizeof(Node))

typedef struct em{
  int *x;
  struct em *con;
} Node;

Node *bp,*sp;

void get_input(Node *t;){
  printf("%s\n","Enter the value" );
  scanf("%d\n",t->x );
  t->con = NULL;
  }
void push(int x){
  Node *new = newNode;
  get_input(new)
  new->con = sp;
  sp = new;
}

void pop(){
  Node *t;
  t = sp;
  sp  = sp->con;
  free(t);
}


void init(){
printf("Welcome to stack sim\n");
sp = bp = newNode;
printf(">>");
get_input(sp);
}

int main() {


  return 0;
}
