#include <stdio.h>

void change(int *);   // int* is indcicating that here address of an integer will come
void change(int *ptr) // here ptr is getting address of n because in main we are passing &n
{

    *ptr = *ptr * 10; // here *ptr means *(&n) which is n
}

int main()
{

    int n;
    printf("enter the number you want to change value of\n");
    scanf("%d", &n);
    change(&n);
    printf("the changed value of n is %d\n", n);

    return 0;
}