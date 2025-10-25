#include <stdio.h>

int address(int* );
int address(int* j)
{
    printf("the value of j is %p\n", j);
    printf("the value at j is %d\n", *j);
    return 0;
}



int main() {
    
int i = 6;
int*  j = &i;


printf("the address of i is %p\n", j);
address(j);



    return 0;
}