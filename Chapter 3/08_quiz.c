#include <stdio.h>

int main() {
    
int  marks;

printf("please enter the marks  ");

scanf("%d", &marks);

if (marks >= 90) {
    printf("A grade\n");
}
else if (marks >= 80) {
    printf("B grade\n");
}

else if (marks >= 70) {
    printf("C grade\n");
}

else if (marks >= 60) {
    printf("D grade\n");       
}
else if (marks >= 50) {
    printf("E grade\n");
}
else {
    printf("F grade\n");
}

    return 0;
}