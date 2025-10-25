#include <stdio.h>
/* using a isPrime variable         */
int main()
{
    int n;
    int isPrime = 1; // Assume prime

    printf("Enter a number: ");
    scanf("%d", &n);

        // 0 and 1 are not prime
    if (n <= 1) {
        printf("The number is not prime\n");
        return 0;
    }


    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
    {
        printf("The number is prime\n");
    }
    else
    {
        printf("The number is not prime\n");
    }

    return 0;
}

/*loop ke bad i ki final vlaue ko n se compare karke*/

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);


        // 0 and 1 are not prime
    if (n <= 1) {
        printf("The number is not prime\n");
        return 0;
    }


    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }

    if (i == n)
    {
        printf("The number is prime\n");
    }
    else
    {
        printf("The number is not prime\n");
    }

    return 0;
}

/*loop ke andar hi reminder ko check karna
 aur agar 0 hai to
 not prime print karwa ke  loop ko wahi break kar dena.
  Aur agar loop khatam ho jata hai them i will become equals to n
   them print is prime*/
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

        // 0 and 1 are not prime
    if (n <= 1) {
        printf("The number is not prime\n");
        return 0;
    }

 for (i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("The number is not prime\n");
            break;
        }
    }

    if (i == n) {
        printf("The number is prime\n");
    }

    return 0;
}