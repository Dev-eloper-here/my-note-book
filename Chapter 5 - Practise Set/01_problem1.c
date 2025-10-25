#include <stdio.h>

float avg(int, int, int);
float avg(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{

    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    float average = avg(a, b, c);
    printf("Average: %.2f\n", average);

    return 0;
}