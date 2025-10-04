#include <stdio.h>

int main() {
    int n = 45;
    float m = 32.46;

    n = (int)m; //convert the data type float to int

    printf("The value of n is: %d\n", n);
    printf("The value of m is: %f\n", m);

    return 0;
}