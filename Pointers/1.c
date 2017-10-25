#include "stdio.h"

int main() {
    int x = 10;
    int *ptr = &x;
    printf("value x is %d, ", *ptr);

    printf("address of x is %p\n", ptr);

    *ptr = 20;
    printf("after doing *ptr=10 value of x is %d, address of x is %p\n", *ptr, ptr);
}