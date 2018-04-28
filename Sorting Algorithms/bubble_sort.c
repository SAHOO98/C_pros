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
  int i,sorted;
  //sorting starts
  while (1) {
    sorted = 0;
    for ( i = 0; i < LEN(ar)-1; i++) {
      if (ar[i]>ar[i+1]) {
        sorted = 1;
        swap((ar+i),(ar+i+1));
      }
    }
    if(!sorted)
      break;
  }

  for (i = 0; i < LEN(ar); i++) {
    printf("%d\n",ar[i]);
  }
  return 0;
}
