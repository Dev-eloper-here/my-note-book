#include <stdio.h>
int change (int a);
int change (int a){

    a = 77;
    return 0;
}
int main() {
    
int b = 22;
change(b); // the vlaue of b will remain  22
printf("%d\n", b);




    return 0;
}