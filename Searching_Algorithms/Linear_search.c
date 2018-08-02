#include <stdio.h>
#define ELEMENT_TO_BE_FOUND 65



int l_search(int *ar, int element, size_t len){
    int c = 0;
    //int len = LEN(ar);
    while (c<len) {
        //printf("%d\t%d\n",c, ar[c]);
        if(ar[c] == element){
            //printf("%d\t%d\n",ar[c],element);
            return c;
        }
        c++;
    }

    return -1;

}

int main(int argc, char const *argv[]) {
    /* code */
    int ar[] = {23, 545, 667, 88, 35, 65, 7863, 47};
    int res = l_search(ar, ELEMENT_TO_BE_FOUND, (size_t)sizeof ar/sizeof *ar);
    //printf("%d\n",LEN(ar));
    if(res!=-1){
        printf("ar[%d] = %d\n", res, ar[res]);
    }else{
        printf("Not found!!!\n");
    }
    return 0;
}
