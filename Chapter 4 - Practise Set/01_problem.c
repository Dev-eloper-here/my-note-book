#include <stdio.h>

int main() {
    int n , a , i;
    printf("enter the number you want to print table of: \n");
    scanf("%d", &n);
    printf("the table of %d is : \n", n);
    
    for(i = 1; i <= 10; i++)
    {
        a = n * i;
printf("%d x %d = %d\n", n, i, a);
    }






    return 0;
}