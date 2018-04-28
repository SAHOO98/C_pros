#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define NEW_POINT(x) (POINT *)malloc(x*sizeof(POINT))
#define EXTEND(ptr,size) (POINT *)realloc(ptr,size*sizeof(POINT))
typedef struct p{
  int x;
  int y;
}POINT;
POINT *g;
void show(POINT *s{
  printf("x = %d\ty = %d\n",s->x,s->y );

}
POINT* getPoint() {
  POINT *t = NEW_POINT(1);
  t->x = rand()%50;
  t->y = rand()%50;
  return t;
  //memcpy(g,t,sizeof(*t));
}

int main() {
  POINT *temp;
  srand(time(NULL));
  g = getPoint();
  show(g);
  g  = EXTEND(g,2);
  show(g);
  temp = g;
  temp++;
  temp = getPoint();

  //free(temp);
  show(g);
  show(++g);

return 0 ;
}
