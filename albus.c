#include <stdio.h>
#include <malloc.h>
typedef struct p{
  int x;
  int y;
}POINT;
void getPoint(POINT **t) {
  *t = (POINT *)malloc(sizeof(POINT));
  (*t)->x = 25;
  (*t)->y = 36;
}

int main() {
  POINT *p1;
  getPoint(&p1);

  printf("x = %d\ty = %d\n",p1->x,p1->y );
}
