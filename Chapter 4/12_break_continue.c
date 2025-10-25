#include <stdio.h>

int main() {
    
for (int i = 0; i < 5; i++)
{
    if (i == 3)
    {
        // break; // it will break the loop if i is 3
        continue; // it will skip the iteration if i is 3
    }
        printf("The value of i is %d\n", i);
  }



printf("for loop is done\n");



    return 0;
}