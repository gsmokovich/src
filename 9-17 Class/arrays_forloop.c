//op. header <stddef.h>  --> use this header if you get undefined error
#include <stdio.h>

int main()
{
    //Initializing an array c
    int c[5];

    for(size_t i = 0; i <5; i++)
    {
        c[i] = 2; 
    }
    printf("%s%13s\n", "Element", "value");

    for(size_t i = 0; i < 5; i++)
    {
        printf("%7u%13d\n", i, c[i]);
    }
}