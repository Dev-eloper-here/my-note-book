#include <stdio.h>

int main()
{

    float subject1, subject2, subject3, average;
    printf("Enter the marks of subject 1\n");
    scanf("%f", &subject1);
    printf("Enter the marks of subject 2\n");
    scanf("%f", &subject2);
    printf("Enter the marks of subject 3\n");
    scanf("%f", &subject3);
    average = (subject1 + subject2 + subject3) / 3;

    if (subject1 >= 33 && subject2 >= 33 && subject3 >= 33 && average >= 40)
    {
        printf("You have been promoted and your total marks percentage is %f %%\n", average);
    }
    else
    {
        printf("You are failed\n");
    }

    return 0;
}