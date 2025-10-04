#include <stdio.h>

int main() {
    
int a = 4;
int b = 3;
int c = a + b;

printf("the value of a is %d and value of b is %d and value of their sum is %d\n", a,b, c);

// modulus operator is used to get the reminder

printf("the remainder when a is divided by b is: %d \n" , a%b);

// this does not work for exponentiation in c
// int d = a^b;

    return 0;
}