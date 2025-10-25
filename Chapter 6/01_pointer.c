
#include <stdio.h>
int main()
{
    int i = 8;
    int *j; // j is a pointer pointing to i  (j is an integer pointer)
    j = &i;   // j now points to i
    printf("the address of i is %p \n", &i);
    printf("the address of i is %p\n", j);
    printf("the address of j is %p\n", &j);
    printf("value i= %d\n", i);
    printf("value i= %d\n", *(&i));
    printf("value i= %d\n", *j);
    return 0;

    
}