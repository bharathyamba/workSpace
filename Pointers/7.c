#include "stdio.h"

int f(int x, int *py, int **pz) {
    int y, z;
    **pz += 1;
    printf("%d,%d,%d,%d,%d\n", x, *py, **pz, y, z);
    z = **pz;
    printf("%d,%d,%d,%d,%d\n", x, *py, **pz, y, z);
    *py += 2;
    printf("%d,%d,%d,%d,%d\n", x, *py, **pz, y, z);
    y = *py;
    printf("%d,%d,%d,%d,%d\n", x, *py, **pz, y, z);
    x += 3;
    printf("%d,%d,%d,%d,%d\n", x, *py, **pz, y, z);
    return x + y + z;
}

int main() {
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    printf("%d,%d,%d\n", c, *b, **a);
    printf("%d\n", f(c, b, a));
    return 0;
}