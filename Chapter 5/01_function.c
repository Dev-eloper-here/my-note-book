#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition
int sum(int x, int y) {
    //printf("the sum is %d\n", x + y);
    return x + y;
}

int main() {
    
int a = 1;
int b = 2;

//int c = a + b;
//printf("The sum of %d and %d is %d\n", a, b, c);

int c = sum(a, b); // Function call
printf("%d\n", c);


    return 0;
}