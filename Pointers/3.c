#include "stdio.h"

int main() {
    float a[] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &a[0];
    float *ptr2 = ptr1 + 3;

    printf("%f\n", *ptr2);
    printf("%ld \n", ptr2 - ptr1);
    return 0;
}