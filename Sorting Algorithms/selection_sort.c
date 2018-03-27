#include <stdio.h>
#define LEN(x) sizeof(x)/sizeof(x[0])

void swap(int *x,int *y) {
  int t;
  t = *x;
  *x = *y;
  *y = t;
}

int main() {
int ar[] = {5,1,2,8,9,2,10,10,3,6,7};
int i,j;

for ( i = 0; i < LEN(ar); i++) {
  for ( j =i+1; j <LEN(ar) ; j++) {
    if(ar[i]>ar[j])
      swap(ar+i,ar+j);
  }
}

for (i = 0; i < LEN(ar); i++) {
  printf("%d\n",ar[i]);
}
  return 0;
}
