#include <stdio.h>

int main()
{
    int a = 7, d;
    //un-initialize pointer
    int *aPtr;

    //store adress of a in ptr
    aPtr = &a;
    //put value at ptr in d
    d = *aPtr;

    ///%p --> print out in address format
    printf("a = %d\naPtr = %p\n*aPtr = %p\n", a, aPtr, d);
}