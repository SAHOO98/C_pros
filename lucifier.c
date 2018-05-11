#include <stdio.h>
typedef struct {
  int f;
  int g;
} my_struct;

void foo(my_struct *p){
  p->g++;
  p->f++;
}

 int main(int argc, char const *argv[]) {
    my_struct l;
    l.g =10; l.f = 20;
    printf("l.g=%d\nl.f=%d\n",l.g,l.f );
    foo(&l);
    printf("l.g=%d\nl.f=%d\n",l.g,l.f );
   return 0;
 }
