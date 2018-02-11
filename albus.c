#include <stdio.h>
#include <math.h>
int main() {
  unsigned long S,T,P,X,Y;
  double e;
  scanf("%d%d%d%d%d",&S,&T,&P,&X,&Y);

  e = (T+P*Y-S)/(X+Y);
  if(e ==(int)e){
    printf("%d\n",(int)e );
  }
  else {
    printf("%d\n",-1 );
  }
  return 0;
}
