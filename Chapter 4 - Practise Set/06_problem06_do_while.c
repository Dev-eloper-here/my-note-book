#include <stdio.h>

int main() {

    int i = 0;
    int sum = 0;
    do {
        i = i + 1;
        sum = sum + i;
    } while (i <10);


printf("the sum of first 10 natural numbers is %d\n", sum);



    return 0;
}