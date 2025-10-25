#include <stdio.h>

void change(int);
void change(int a)
{

    a = a * 10;
}

int main()
{

    int n;
    printf("enter the number you want to change value of\n");
    scanf("%d", &n);
    change(n);
    printf("the changed value of n is %d\n", n);
    

    return 0;
}