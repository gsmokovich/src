void bubbleSort(unsigned int a[], int size)
{

    for(unsigned int pass = 1; pass < size; pass++)
    {

        //loop to control number if comparisons per pass
        for(int i = 0; i < size - 1; i++)
        {
            //compare adjacent elements and swap them if first 
            //element is greater than second element
            if(a[i] > a[i + 1])
            {
                int hold = a[i];
                a[i] = a[i + 1];
                a[i +1] = hold;
            }
        }
    }
}