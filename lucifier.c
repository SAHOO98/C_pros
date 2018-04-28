#include <stdio.h>
#include <string.h>
void print(int *c,int len){
  for (int i = 0; i < len; i++) {
    printf("%d",c[i]);
  }
  printf("\n");
}

int left_rotate(int *s,int s_size){
    int c,j=0,s1[s_size+1];
    memcpy(s1,s,s_size+1);

    do{
    c = s[0];
    for(int i = 0; i<s_size-1;i++){
        s[i]  = s[i+1];
    }
    s[s_size+1] = c;
    print(s,s_size+1);
    /*if(!s[s_size])
        j++;
        */
    //printf("%d\n",memcmp(s1,s,s_size));
  }while(1);
    return j;
}
int main(){
 int s[4] ={1,0,1};
 printf("%d\n",left_rotate(s,3));
    return 0;

}
