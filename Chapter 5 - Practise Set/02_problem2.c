#include <stdio.h>

float convertion(float);
float convertion(float celsius)
{

    return (celsius * 9.0 / 5.0) + 32.0;
}

int main()
{

    printf("enter the temperature in celsius: ");
    float celsius;
    scanf("%f", &celsius);

    printf("the temperature in fahrenheit is: %.2f\n", convertion(celsius));

    return 0;
}