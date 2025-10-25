#include <stdio.h>
int fib(int);
int fib(int n)
{if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
    return fib((n - 1)) + fib((n - 2));
}

int main()
{

    printf("enter the number of terms: ");
    int n;
    scanf("%d", &n);

    if (n < 0)
    {
        printf("error! fibonacci series is not defined for negative numbers.\n");
        return 1; 
    }
    printf("The %dth Fibonacci number is: %d\n",n, fib(n));

    return 0; 
}