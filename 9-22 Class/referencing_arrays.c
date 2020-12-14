#include <stdio.h> 

//Arrays can be passed as pointers
/*Note: The avg function has no way of knowing
 *      how many values there are, which means
 *      that we need to pass that info along to. 
 */
float avg(int *myArray, int arraySize, float *avg)
{
    *avg = 0.0;
    for(int i = 0; i < arraySize; i++)
    {
        *avg += myArray[i];
    }
    return *avg/arraySize;
}

int main(void)
{
    //initialize vaiables
    int values[] = {3, 1, 4, 5, 9, 2, 6};
    //use 0.0 because we have decimals
    float average = 0.0;
    //%0.73f = have 73 digits after decimal for float 
    //avg(values, sizeof(values)/sizeof(int), &average)
    //... values --> array
    //...sizeof(values)/sizeof(int)--> size of the array names values divided by each value of data type int 
    //... &average --> will point to average and in the function it will be dereferenced
    printf("The average value is: %0.73f\n", avg(values, sizeof(values)/sizeof(int), &average));
    return 0; 
}