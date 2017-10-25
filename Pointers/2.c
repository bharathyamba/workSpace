#include "stdio.h"
#include "stdlib.h"

int main() {
//    int v[3] = {10, 100, 1000};
//    int *ptr;
//    ptr = v;
//    for (int i = 0; i < 3; i++) {
//        printf("value of *ptr = %d\n", *ptr);
//        printf("address of ptr = %p\n", ptr);
//        ptr++;
//    }
    int arr[2][3] = {{1, 2, 3},
                     {4, 5, 6}};
    /*for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); ++j) {
            printf("value of arr[%d][%d] %d \n", i, j, arr[i][j]);
        }
    }*/
    printf("%d\n", *(*(arr+0)+0));
}