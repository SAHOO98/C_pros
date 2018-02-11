#include <stdio.h>

int foo(int x){
  return x;
}

int foo1(int x){
  return ++x;
}

int main() {
  int (*func[])(int)={foo,foo1};
  int i=0;
  for(;i<2;i++)
    printf("%d",func[i](5));
  return 0;
}
