#include <stdio.h>

/* adds a and b, and places the sum in sim. 
 * returns the sum of a and b
 */

//a nd b are passed by value. 
//sum is passed by reference
int add(int a, int b, int *sum)
{
    //Dereference first. 
    //We want to update the value of sum, not the value of the pointer.
    *sum = a + b;
    //What does this function return? 
    //returns the int of sum
    return *sum;
}

int main(void)
{
    int a, b, sum; 

    a = 5; b = 7; 
    //Pass the pointer to sum, NOT the actual variable.
    add(a, b, &sum);

    printf("The sum of %d and %d is %d.\n", a, b, sum);
    return 0;
}