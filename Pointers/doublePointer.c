#include "stdio.h"

int main() {
    int a = 10;
    int *ptr = &a;
    int **dptr = &ptr;
    printf("a = %d\n", a);
    printf("*ptr = %d\n", *ptr);
    printf("**ptr = %d\n", **dptr);
}