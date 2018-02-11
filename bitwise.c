#include <stdio.h>
int main()
{
 int a,b;
 printf("Enter the first value:\n");
 scanf("%d", &a);
 printf("Enter the second value:\n");
 scanf("%d", &b);
 printf("%d\t%d\n",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("The Swaping is: %d\t%d \n", a,b);
  return 0;
}
