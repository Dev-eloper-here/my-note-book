#include <stdio.h>

int sum(int*, int*);

//sum should change the value of x and y
int sum(int* a, int* b)
{
    *a = 6;
    return *a + *b;
}

int main()
{

    int x = 1, y = 6;
    printf("the sum of x and y is %d\n", sum(&x, &y));
printf("the value of x is %d\n", x);
    return 0;
}