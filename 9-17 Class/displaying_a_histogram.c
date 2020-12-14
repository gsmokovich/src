#include <stdio.h>
#include <stddef.h>
int main()
{
    int c[6] = {3, 11, 4, 1, 5, 7};

    printf("%s%13s%17s\n", "Element", "value", "Histogram");

    for(size_t i = 0; i < 5; i++)
    {
        //%7u%13d%8s --> 7u for the size of 7 spaces
        //               13d for the data type
        //               8s for dots 
        printf("%7u%13d%8s", i, c[i], "");
        for(int j = 1; j <= c[i]; j++)
        {
            printf("%s", ".");
        }
        //end a histogram bar with a new line 
        puts("");
    }
}