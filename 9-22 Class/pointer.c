#include <stdio.h>

int main()
{
    int a = 7;
    //un-inititalize Pointer
    int *aPtr;
    //store address of a in ptr
    aPtr = &a;

    printf("a = %d\naPtr = %p\n", a, aPtr);
}