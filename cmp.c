#include <stdio.h>
#include "vector.h"

int main()
{
  int * v = Vector_Init(15);
  //printf("%d\n",v[0]);
  for(int i = 1;i<10;i++){
    //printf("%d\n", len);
    v = push(i+1,v);
  }
  for(int  i = 0; i<10;i++)
    printf("%d\n", v[i]);
  v = push(69,v); // :-D :-D
  printf("%d\n",v[get_lenght(v)-1] );

  return 0;
}
