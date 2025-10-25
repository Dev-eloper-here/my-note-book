#include <stdio.h>

int main()
{

  int a;

  printf("enter the number");
  scanf("%d", &a);

  int i = 1;

  do
  {
    printf("%d\n", i);
    i++;

  } while (i <= a);

  return 0;
}