#include <stdio.h>

int main() {
    int n, product = 1;
    printf("enter the number you want to find factorial of: \n");
    scanf("%d", &n);
while (n>0)
{
    product = product * n;
    n = n - 1;
}
printf("The factorial is: %d\n", product);






    return 0;
}