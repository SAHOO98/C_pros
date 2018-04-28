#include <stdio.h>
#define TRUE 1
#define FALSE 0
//checking a given number is a power of two
int check_power_of_2(int x){
  return (x && !(x&(x-1))); //0 for not power of 2
}
//counting number of 1s in a binary number
int count_1_in_number(int x){
  int count=0;

  while(x){
    x = x& (x-1);
    count++;
  }
  return count;
}
//cheking i<sup>th </sup> place is set or not in binary representation
int checking_ith_place(int x,int pos){
  return x &(1<<pos));
}
int main() {
if (check_power_of_2(2*2*2*2)) {
  printf("Power of 2\n");
}
printf("%d\n",count_1_in_number(625));
printf("%d\n",checking_ith_place(625,5) );

return 0;
}
