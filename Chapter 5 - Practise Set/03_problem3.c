#include <stdio.h>

float force(float);
float force(float mass)
{

    return mass * 9.8;
}

int main()
{
    printf("enter the mass of body  ");
    float mass;
    scanf("%f", &mass);

    printf("the force of gravitation on the body is: %.2f\n", force(mass));

    return 0;
}