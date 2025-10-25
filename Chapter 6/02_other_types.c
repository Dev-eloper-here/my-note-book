#include <stdio.h>

int main()
{
    char i = 'A';
    char *j = &i; // j is a pointer pointing to i  (j is a character pointer)

    float k = 67.5;
    float *k1 = &k; // k1 is a pointer pointing to k

    printf("the address of i is %p\n", &i);
    printf("the address of i is %p\n", j);
    printf("the address of k is %p\n", &k);
    printf("the value at address j is  %d\n", *(&i));

    return 0;
}