#include <stdio.h>

#define h1 2
#define h2 3
#define h3 4

 int ar[] = {h1,h2,h3};
int main(int argc, char const *argv[]) {
  for (size_t i = 0; i < 3; i++) {
    if(4 == ar[i])
        printf("yes!!!!!!!!\n");

  }
  return 0;
}
