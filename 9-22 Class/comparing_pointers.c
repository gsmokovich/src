#include <stdio.h>

int main(void)
{
    int a = 7;
    //set Ptr to the address of a
    int *aPtr = &a;

    //%p = printing the addrress
    printf("The value of a is %p.\nThe address of a is %p.\n", a, &a);

    printf("The value of aPtr is %p.\nThe value of *aPtr is %p.\n", aPtr, *aPtr);

    printf("Showing that * and & are complements of each other"
            "\n&*aPtr = %p.\n*&aPtr = %p.\n", &*aPtr, *&aPtr);

    return 0;
}