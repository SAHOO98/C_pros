#include <stdio.h>

int main() {
  int i,s,k,a = 1;

  for (i = 1; i <=5; i++){
    for (s = 5; s >i; s--)
      printf(" ");
    for (k = 1; k <= a; k++) {
      if(k<=(a+1)/2)
        printf("%d",k );
      else
      printf("%d", a-k+1);
    }
    a+=2;
    printf("\n");
  }
  return 0;
}
