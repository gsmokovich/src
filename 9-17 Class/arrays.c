#include <stdio.h> 

int main()
{
    //create an array of data type int and size 10
    //const--> variables will not change (Similar to #define)
    //    space number: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    const int PI[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    //Print out the 3rd digit of the array
    printf("The 3rd digit of PI is %d.\n", PI[2]);

    return 0; 
}
