#include <stdio.h>

int main() {
    int a = 9;
    int b = 2;

    float c = a/b; 
// operation between two integers results in an integer
// operation between an integer and a float results in an float
// operation between two floats results in a float

    printf("the value of a/b is: %f\n", c);




    float d = 9;
    int e = 2;

    float f = d/e;


printf("the value of d/e is: %f", f);

 
int z = 6.7;
printf("\nThe value of z is: %d\n", z); // This will truncate the decimal part



    return 0;
}