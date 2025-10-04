#include <stdio.h>
int main() {

float length;
printf("enter the length of the rectangle:");
scanf("%f", &length);
printf("Length of the rectangle is: %.2f\n", length);

float breadth;
printf("enter the breadth of the rectangle:");
scanf("%f", &breadth);
printf("Breadth of the rectangle is: %.2f\n", breadth);

float area = length * breadth;
printf("Area of the rectangle is: %.2f\n", area);

    return 0;
}