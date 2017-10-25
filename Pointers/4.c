//
// Created by sys1036 on 24/10/17.
//

#include<stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr1 = arr;
    int *ptr2 = arr + 6;
//    printf("%s");
    printf("Number of elements between two pointer are: %ld.\n",
           (ptr2 - ptr1));
    printf("Number of bytes between two pointers are: %ld\n",
           (char*)ptr2 - (char*) ptr1);
    return 0;
}
