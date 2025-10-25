#include <stdio.h>

int factorial(int);

int factorial(int n)
{
    if (n == 0 || n == 1) { // base condition
        return 1;
    }

        return n * factorial(n - 1);
   
}

int main()
{

    printf("enter the number you want factorial of\n");
    int n, a;
    scanf("%d", &n);

     if (n < 0) {
        printf("Factorial is undefined for negative numbers.\n");
        return 1;
    }
    a = factorial(n);
    printf("the factorial of %d is %d\n", n, a);

    return 0;
}


// ek baar return ho gaya to uske niche ka kuch bhi execute nahi hoga fir chahe wo kuch bhi ho