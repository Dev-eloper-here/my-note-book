#include <stdio.h>

int main()
{

    int age = 65;
    if (age > 18)
    {
        printf("You can drive\n");
        if (age > 60)
        {
            printf("You are above 60, please drive carefully\n");
        }
    }
    else
    {
        printf("You cannot drive\n");
    }

    // but this can also be done using else if statement
    if (age > 60)
    {
        printf("You are above 60, please drive carefully\n");
    }

    else if (age > 18)
    {
        printf("You can drive\n");
    }

    else
    {
        printf("You cannot drive\n");
    }

    // another example of else if ladder to understand its filter analogy

    if (age > 60)
    {
        printf("You can drive and you are a senior citizen\n");
    }
    else if (age > 40)
    {
        printf("You can drive and you are elder\n");
    }
    else if (age > 18)
    {
        printf("You can drive \n");
    }

    else
    {
        printf("You cannot drive\n");
    }

    return 0;
}