#include <stdio.h>

int main()
{
    int i = 1;
    int element;
    int sum = 0;
    for (i = 1; i <= 10; i++)
    {
        element = 8 * i;
        sum = sum + element;
    }

    printf("the sum of first 10 multiples of 8 is %d\n", sum);

    return 0;
}