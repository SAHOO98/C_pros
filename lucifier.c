#include <stdio.h>
typedef struct {
  int f;
  int g;
  int d;
} my_struct;

size_t _strlen(char *x){
  int c = 0;
  while(*x!='\0'){
    c++;
    x++;
  }

  return c;

}
 int main(int argc, char const *argv[]) {
   char *d = "i love Riya";
   my_struct r;
   r.f = 25;
   printf("%d\t%d\n",r.g,r.d);
   printf("%d\n",_strlen(d));
   return 0;
 }
