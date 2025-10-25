#include <stdio.h>

int main() {
     

   int i = 5;
   printf ("the value of i is %d\n", i);


i = i +5; //10

 printf ("the value of i is %d\n", i);

 //  ++i; //11
   // printf ("the value of i is %d\n", i);


    //i ++  is not same as ++i


printf ("the value of i is %d\n", i++); //10
printf ("the value of i is %d\n", i); //11

// i ++  is not same as ++i
// i ++ prints i fitrst then increment it (post increment operator)
// ++ i  increments i first then prints it (pre increment operator)


i += 2; // i = i + 2
printf ("the value of i is %d\n", i); //13
    return 0;
}