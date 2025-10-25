#include <stdio.h>

int* sum(int*, int*);
int* sum(int* a, int* b)
{
    int summation = *a + *b;
    printf("the sum of integers is %d\n", summation);
    printf("address of 'summation' inside sum() is %p\n", (void*)&summation);
    return NULL; // no need to return anything meaningful
}

float* avg(int*, int*);
float* avg(int* x, int* y)
{
    float average = (*x + *y) / 2.0;
    printf("the avg of two integers is %.2f\n", average);
    printf("address of 'average' inside avg() is %p\n", (void*)&average);
    return NULL; // no need to return anything meaningful
}

int main()
{
    int a1, a2;
    printf("enter the two integers\n");
    scanf("%d %d", &a1, &a2);

    sum(&a1, &a2);
    avg(&a1, &a2);

    return 0;
}
