#include <stdio.h>

int main() {
    
// //Write a program to determine whether a character entered by the user is 
// lowercase or not.
// 97 to 122 
char ch = 'a';

printf("Character is : %c\n", ch);
printf("ASCII value: %d\n", ch);

if (ch >= 97 && ch <= 122) {
    printf("Character is lowercase\n");
   
}
else {
    printf("Character is not lowercase\n");
}

    return 0;
    } 