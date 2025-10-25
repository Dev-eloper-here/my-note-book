#include <stdio.h>

int sum (int );
int sum (int n)
{
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}



int main() {
    

int n = 5;


printf("the sum of first 5 natural numbers is %d\n", sum(5));

    return 0;
}