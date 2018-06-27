#include <stdio.h>
#include<stdlib.h>
#include <time.h>

#define INIT_LENGHT 10
#include <malloc.h>

typedef struct {
  int *array;
  int len;
} Vector;

void Vector_Init(Vector *v);
void Push(int data, Vector *v);
//int Pop(Vector *v);

int main()
{
  srand(time(NULL));
  int i = 0;

  Vector v;
  Vector_Init(&v);

  for ( i = 0; i < 10; i++) {
    Push(rand()%50+1,&v);
  }

  printf("\n\nLenght:-%d\n\n",v.len);
  for (i  = 0; i < v.len; i++) {
      printf("%d\n",v.array[i]);
  }

  Push(rand()%50+1,&v);

  printf("\n\nLenght:-%d\n\n",v.len);
  for (i  = 0; i < v.len; i++) {
      printf("%d\n",v.array[i]);
  }

  return 0;
}

void Vector_Init(Vector *v) {
  v->array = (int *)malloc(sizeof(int)*INIT_LENGHT);
  v->len = 0;
}

void Push(int data,Vector *v){
  if(v->len <INIT_LENGHT){
    v->array[v->len] = data;;
    v->len++;
  }else{
    v->array = (int *)realloc(v->array,sizeof(int)*(++(v->len)));
    v->array[v->len] = data;
    v->len++;
  }
}
