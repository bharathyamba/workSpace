
#include <stdio.h>

int main() {
    int var;  /*Suppose address of var is 2000 */

    void *ptr = &var;
    *(int *) ptr = 5;
    printf("var=%d and *ptr=%d", var, *(int *) ptr);

    return 0;
}