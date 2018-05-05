#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  int k;
  char *r;
  char str[100];
  k = getchar();
  printf("%c\n",k);
  printf("Hello\n");
  getchar();
  fgets(str,100,stdin);
  if((r = strchr(str,'\n'))!= NULL){
    *r = '\0';
  }
  scanf("%d",&k);
  printf("%s",str);
  printf("%d\n",k);
  return 0;
}
