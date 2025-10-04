#include <stdio.h>

int main() {
    
float income, tax;
printf("Enter your income in lakhs: \n");
scanf("%f", &income);


if (income <= 2.5) {
    printf("You don't have to pay tax\n");

}

else if (income > 2.5 && income <= 5.0) {
    tax = income * 0.05;
    printf ("You have to pay 5%% income tax and your tax amount is %.2f  rupees\n", tax *100000);
}


else if (income > 5.0 && income <= 10.0) {
     tax = income * 0.20;
    printf ("You have to pay 20%% income tax and your tax amount is %.2f rupees\n", tax *100000);
}
else if (income > 10.0) {
     tax = income * 0.30;
    printf ("You have to pay 30%% income tax and your tax amount is %.6f rupees\n", tax * 100000);
}


    return 0;
}