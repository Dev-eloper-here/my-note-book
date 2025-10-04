#include <stdio.h>

int main() {
    
int a = 2, b = 3, c = 4, d = 5;
if (a > b && a > c && a > d    ) {
    printf("a is the greatest\n");
}
else if (b > a && b > c && b > d) {
    printf("b is the greatest\n");
}
else if (c > a && c > b && c > d) {         
    printf("c is the greatest\n");
}
else {
    printf("d is the greatest\n");
}

    return 0;
}