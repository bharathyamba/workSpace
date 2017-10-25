#include "stdio.h"

void printxy(int x, int y);
int main() {
    int a = 300;
    char *b = (char *) &a;
    *++b = 2;
    printf("%d ", a);
    printxy(1, 1);
    return 0;
}

void printxy(int x, int y) {
    int *ptr;
    x = 0;
    ptr = &x;
    y = *ptr;
    *ptr = 1;
    printf("%d,%d", x, y);
}