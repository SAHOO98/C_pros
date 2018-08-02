#include <stdio.h>
#define LEN(x) sizeof x / sizeof *x
/*
*This is like binary search, with a little tweaks.
*It can be used when the list elments are sorted and uniformly distributed 
*/
int interpolation_search(int *ar, int data,  int len){
    int lb = 0, ub = len - 1;
    int mid = 0;
    while(lb<=ub){
        mid = lb + (double)((ub - lb)/(ar[ub]-ar[lb])) * (data - ar[lb]);
        if(ar[mid] == data)
            return mid;
        else if(ar[mid] < data)
            lb = mid + 1;
        else if(ar[mid] > data)
            ub = mid - 1;
    }

    return -1;

}

int main(int argc, char const *argv[]) {
    /* code */
    int ar[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24};
    int index = interpolation_search(ar, 14, LEN(ar));
    if(index!=-1){
        printf("ar[%d] = %d\n", index, ar[index]);
    }else{
        printf("Not found!!!\n");
    }
    return 0;
}
