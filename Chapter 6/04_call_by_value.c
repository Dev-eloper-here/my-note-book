#include <stdio.h>

int sum(int, int);
int sum(int a, int b)
{ a= 6 ;//sum function cannot change the value of x using x because copy of x is passed to a
    return a + b;
}

int main()
{

    int x = 1, y = 6;
    printf("the sum of x and y is %d\n", sum(x, y));
    
    return 0;
}