#include <stdio.h>

int main()
{
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid day number");
    }

    // in switch statement we can only use int or char data types
    // in switch order of cases does not matter but in if else ladder order matters
    // in switch case we use break statement to terminate a case otherwise it will execute all the cases after the matched case
    // default case is optional but it is good practice to use it

    return 0;
}