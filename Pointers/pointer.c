/***
 Created by sys1036 on 20/10/17.
***/

#include "stdio.h"

void main() {
    int x = 10, *ptr;
    ptr = &x;
    printf("%p, %d\n", &x, x);
}