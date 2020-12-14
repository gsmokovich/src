#include <stdio.h>

//Extra Credit: 
//Find the Mean, Median, and Mode of a data set. 

//Mode: The value that apppears the most frequently
int mode(int array[], int x)
{
    //variable to represent the mode
    int modeNum = 0;
    //variable to represent the number of times the modeNum appears
    int maxModeCount = 0;

    //go through the list and determine which value has the highest frequency
    for(int i = 0; i < x; i++)
    {
        //Keep count of each values frequancy
        int modeCount = 0; 

        for(int j = 0; j < x; j++)
        {
            //see how many times the value repeats
            if (array[i] == array[j])
            {
                //iterate count
                modeCount++;
            }
        }

        //check if count has highest frequency
        if(modeCount > maxModeCount)
        {
            maxModeCount = modeCount;
            modeNum = array[i];
        }
        
    }
    
    //There is no mode
    if(maxModeCount == 1)
    {
        printf("There is no mode. \n");
        return -1;
    }

    return modeNum;
}

//Mean: The sum of all values in the array 
//      divided by the number of values in the array
double mean(int array[], int x)
{
    //variables: 
    double sum = 0;

    //determine how many values are in the array
    for(int i = 0; i < x; i++)
    {

        //find the sum of the values of the array
        sum = sum + array[i];

    }

    //calculate the mean
    return sum / x;
}

//Median: The middle number
//        If two values are in the center take the mean of those numbers. 
void getMedian(unsigned int array[], int x)
{
    //variable
    double median = 0;

    //Put the list in order through a bubble sort
    for(unsigned int pass = 1; pass < x; pass++)
    {

        //loop to control number if comparisons per pass
        for(int i = 0; i < x - 1; i++)
        {
            //compare adjacent elements and swap them if first 
            //element is greater than second element
            if(array[i] > array[i + 1])
            {
                int hold = array[i];
                array[i] = array[i + 1];
                array[i +1] = hold;
            }
        }
    }

    //find the median of an even numbered list
    
    if(x % 2 == 0)
    {
        x = (x + 1) / 2 - 1;
        median = (double)(array[x] + array[x + 1]) / 2;

    }
    else //find median of an odd numbered list
    {
         x = (x + 1) / 2 - 1;
        median = array[x];

    }
    
    printf("The Median is %lf\n", median);
}


//main function
int main()
{
    int x = 6;
    int c[6] = {3, 11, 4, 1, 5, 7};
    printf("The Mode is %d\n", mode(c, x));
    printf("The Mean is %lf\n", mean(c, x));
    getMedian(c, x);

}