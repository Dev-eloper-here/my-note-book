#include <stdio.h>

int main() {
    
int i = 6;
int*  j = &i;

printf("the value of i is %d\n", i);
printf("the address of i is %p\n", j);
printf("the value of i using j is  %d\n", *j);
printf("the address of i is %p\n", &i);




    return 0;
}