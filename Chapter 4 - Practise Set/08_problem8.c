#include <stdio.h>

int main() {
    
int n;
int i;
int fact = 1;
printf("enter the number you want to find factorial of: \n");
scanf("%d", &n);
for ( i = n; i > 0; i--)
{
    fact = i * fact;
}
printf("the factorial of %d is %d\n", n, fact);


    return 0;
}