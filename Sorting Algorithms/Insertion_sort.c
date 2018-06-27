#include <stdio.h>
#define LEN(x) (sizeof(x)/sizeof(x[0]))
void print_array(int,int*);
void swap(int*,int*);

void Insertion_sort(int arr_count, int *arr){
  int i,hole, m;

  for(i=1; i<arr_count; i++){
    hole = i-1;
    m = arr[i];

    while (hole>=0 && m <arr[hole] ) {
      arr[hole+1] = arr[hole];
      hole--;
    }

    arr[hole+1] = m;
    }
    //print_array(arr_count,arr);
   }

    void print_array(int arr_count, int* arr){
        int i;
        for (i=0;i<arr_count;i++){
                printf("%d ",arr[i]);
        }
        printf("\n");

    }

    void swap(int* m, int* n){
        int t = 0;
        t = *m;
        *m = *n;
        *n = t;
    }
    // Complete the insertionSort2 function below.
    int insertionSort2(int arr_count, int* arr) {
        int i, j, c = 0;

        for(i = 0;i<arr_count;i++){
            for (j=0;j<i;j++){
                if (arr[i] < arr[j]){
                    swap(arr+i, arr+j);
                    c++;
                  }
            }
            //if (i!=0)
            //print_array(arr_count, arr);
        }

    print_array(arr_count, arr);
    return c;
    }

void insertionSort1(int arr_count, int* arr) {
    int m, i;
    m = arr[arr_count-1];
    //printf("%d\n",m );
    for(i=arr_count-2;i>=0;i--){
        if (arr[i] > m){
            arr[i+1] = arr[i];
            print_array(arr_count, arr);
            arr[i] = m;
            if(i==0)
              print_array(arr_count, arr);
        }else{
            arr[i+1] = m;
            print_array(arr_count, arr);
            return;
        }
            //return;
    }

}

int main() {
  int ar[] = {1, 0, 4, 0, 1, 6, 1, 7, 0, 6, 3};
  print_array(LEN(ar), ar);
  Insertion_sort(LEN(ar), ar);
  printf("%s\n","Sorted Array:-" );
  print_array(LEN(ar), ar);
  return 0;
}
