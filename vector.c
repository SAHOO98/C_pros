#include "vector.h"

int static len ;

int** Vector_Init(int data){
  int *vec = (int *)malloc(sizeof(int)*INIT_LENGHT);
  vec[0] = data;
  len++;
  return &vec;
}
int get_lenght(){
  return len;
}
int* push(int data,int **vec){
  if(len<=INIT_LENGHT){
    *vec[len] = data;
    len++;
  }else{
    *vec = (int *)realloc(*vec,sizeof(int)*(++len));
    *vec[len]  = data;
  }
  return *vec;
}

int * pop(int **vec){
  if(len>0){
    free(*vec+(--len)-1);
    len--;
    return *vec;
  }else{
    return NULL;
  }

}
