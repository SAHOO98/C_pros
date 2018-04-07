#include <stdio.h>

#define OR ||
#define AND &&

void scanf_string(char *c) {
  register char ch = 0;
}
//optimised input for integers
void scanf_int(int *n){
register int c=0;
register short flag=0;
*n = 0;
c = getchar_unlocked();
if (c=='-'){
  flag = 1;
  c = 0;
  c = getchar_unlocked();
}
while(c>47 AND c<58){
  *n = (*n<<1)+(*n<<3)+c-48;
  c = getchar_unlocked();
}
if (flag)
  *n  = -(*n);
}

int main() {
  int x;
  //x = getchar_unlocked();
  scanf_int(&x);
  printf("%d\n",x);
  return 0;
}
