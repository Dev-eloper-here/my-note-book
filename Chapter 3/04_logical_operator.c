#include <stdio.h>

int main()
{
    int a = 1;
    int b = 1;
    printf("the value of a and b is %d\n", a && b);
    printf("the value of a or b is %d\n", a || b);

    printf("the value of not a is %d\n", !a);
    printf("the value of not b is %d\n", !b);

    if (a && b)
    {
        printf("both are true\n");
    }

    // another way to write the same code
    if (a)
    {
        if (b)
        {
            printf("both are true\n");
        }
    }

    // this is the benefit of logical operator

    return 0;
}