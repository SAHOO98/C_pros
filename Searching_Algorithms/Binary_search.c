#include <stdio.h>
int binary_search(int *ar, int element, size_t len){
    int lb = 0, ub = len-1;
    int mid;
    while(lb<= ub){
        mid = (lb+ub)/2;
        if(ar[mid]< element){
            lb = mid + 1;
        }else if(ar[mid]> element){
            ub = mid - 1;
        }else{
            return mid;
        }
    }
    return -1;
}
int main(int argc, char const *argv[]) {
    int ar[] = {9, 18, 22, 37, 40, 58, 69, 78, 99, 108};
    int element  = 69 ;
    int index = binary_search(ar, element, sizeof ar/sizeof *ar);
    if(index!=-1){
        printf("ar[%d] = %d\n", index, ar[index]);
    }else{
        printf("Not found!!!\n");
    }
    return 0;
}
