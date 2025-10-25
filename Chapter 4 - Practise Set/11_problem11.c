#include <stdio.h>

int main() {
    int n, i = 2;
    printf("Enter a number: ");
    scanf("%d", &n);


    // 0 and 1 are not prime
    if (n <= 1) {
        printf("The number is not prime\n");
        return 0;
    }

    while ((i < n) && (n % i != 0)) {
        
        i++;
    }
    

    if (i == n) {
        printf("The number is prime\n");
    } else {
        printf("The number is not prime\n");
    }

    return 0;
}