#include <stdio.h>

int main()
{

    int i = 2;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;
    printf("the address of i is %p\n", &i);
    printf("the address of ptr1 is %p\n", &ptr1);
    printf("the address of ptr2 is %p\n", &ptr2);
    printf("the value of i using ptr1 is %d\n", *ptr1);
    printf("the value of i using ptr2 is %d\n", **ptr2);

    return 0;
}