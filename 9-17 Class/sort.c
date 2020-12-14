#include <stdio.h>
#include "bubbleSort1.h"
#define SIZE 8

int main()
{
    int c[] = {3, 11, 4, 1, 5, 7, 2, 1};
    printf("Data items in original order\n");

    //output original array
    for(size_t i = 0; i < SIZE; i++)
    {
        printf("%4d", c[i]);
    }
    bubbleSort(c, SIZE);

    printf("\nDatfa items in ascending order\n");
    //output sorted array
    for(int i = 0; i < SIZE; i++)
    {
        printf("%4d", c[i]);
    }
}