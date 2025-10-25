#include <stdio.h>
#include <math.h>  // for pow() function

int main() {
    double a, area;

    // Input side of square
    printf("Enter the side of the square: ");
    scanf("%lf", &a);

    // Calculate area using pow() function
    area = pow(a, 2);

    // Display result
    printf("Area of the square = %.2lf\n", area);

    return 0;
}
