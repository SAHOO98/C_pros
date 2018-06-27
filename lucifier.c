#include <stdio.h>
#include <string.h>
#include <malloc.h>

char **divide_string(char *s){
  int len,j=0,i;
  char **subs;
  *subs = (char *)malloc(sizeof(char *)*2);
  if((len = strlen(s))%2 ==0){
    subs[0] = (char *)malloc(len/2+1);
    subs[1] = (char *)malloc(len/2+1);
    for ( i = 0; i < len/2; i++) {
      subs[0][i] = s[i];
    }
    subs[0][i] = '\0';

    for ( i = len/2; i < len; i++) {
      subs[1][j] = s[i];
      j++;
    }
    subs[1][j] = '\0';

    return subs;
  }else{
    return NULL;
  }

}

int main() {
  char s[100]="FOUR";
  char **sr;
  sr = divide_string(s);
  if(sr!=NULL){
    printf("Lenght of 1 %s.\n",sr[0]);
    printf("Lenght of 2 %s.\n",sr[1]);
 }else{
   printf("Cant Be done!!!!!!!!!!!!!!!!!!!!\n");
 }
  return 0;
}
