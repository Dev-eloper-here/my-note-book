#include <stdio.h>

int main() {
    int n , a , i;
    printf("enter the number you want to print table of: \n");
    scanf("%d", &n);
    
    for(i = 10; i >0; i--)
    {
        a = n * i;
printf("%d x %d = %d\n", n, i, a);
    }






    return 0;
}