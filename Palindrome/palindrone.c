#include <stdio.h>
#include <stdlib.h>

 //function to get last digit
int getLastDigit(int y)
{ 
    //Returns last digit

    return y % 10; 
} 

//function to check for palidrome
 unsigned int check_palidrome(int palidrome)
 {
     //create an array for palindrome 
    char WholePalindrome[7] = {'0', '0', '0', '0', '0', '0', '\0'}; 
    int x = 0;


    //store numbers in the palidrone as char 
    for(int i = 0; i < 6; i++)
    {
        //convert to char
        WholePalindrome[i] = getLastDigit(palidrome) + '0';
        palidrome = palidrome / 10;
        //printf("Palindrome Array Number: %d\n", WholePalindrome[i]);
    }
    

   //if else loop to determine if it is a palindrome
   if(WholePalindrome[0] == WholePalindrome[5] && WholePalindrome[1] == WholePalindrome[4] && WholePalindrome[2] == WholePalindrome[3])
   {
       //it is a palindrone
       //printf("return IT WORKED\n");
       return atoi(WholePalindrome);

   }
   else
   {
       //printf("return FAiled\n");
       return -1;
   }

 }
    /*int x = palidrome % 10;

    //store numbers in the palidrone as char 
    for(int i; i < 6; i++)
    {
        //convert to char
        WholePalindrome[i] = getLastDigit(palidrome) + '0';
        palidrome = x/10;
    }

    //reverse array
    for (int i = 6; i > 0; i--)
    {
        printf("%c", WholePalindrome[i]);
    }

     return 0; 
 }
 */

//function to format statement 
int format_palidrome(int max1, int max2, int palidrome)
 {
    //format seperated by commas
     printf("%d, %d, %d\n", max1, max2, palidrome);
 }

 //function to calculate and check for largest palindrome of two 3-digit numbers
 unsigned int calculate_palidrome()
 {
     int factor1 = 0; 
     int factor2 = 0;
     int palidrome = 0;

     //Using a For Loop find max1 and max2 (the two 3 digit numbers)
     for(int max1 = 900; max1 <= 999; max1++)
     {
         for(int max2 = 900; max2 <= 999; max2++)
         {
             //calculate the product
            int product = max1 * max2;  
        
            //check that the product is a palindrome 
            if(product == check_palidrome(product))
            {
                 //compare product and palidrome to find largest palindrone
                 if(product > palidrome)
                 {
                    //set product as new palindrome
                    palidrome = product;

                    factor1 =  max1;
                    factor2 = max2;             
                }
            }
         }
         
     }

     format_palidrome(factor1, factor2, palidrome);
 }



//main function
 int main()
 {
    calculate_palidrome();
     return 0; 
 }


