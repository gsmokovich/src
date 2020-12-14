#include <stdio.h>

 //preprocessor symbol
    #define PI 3.1415926 

int main()
{
   
    //variables
    float radius;


    //Ask the user for the radius of the circle
    printf("Enter radius: ");
    scanf("%f", &radius);
   
    
    if(radius <= 0)
    {
        printf("Invalid radius. Must be greater than zero.\n");
        return 1;
    }
    else
    {
        //state the radius
         printf("A circle with radius %0.3f:\n", radius);

        //variables 
        //float diameter;
        //float circumference;
        //float area;

        //compute diameter
        float diameter = 2 * radius;
        printf("\tDiameter: %0.3f\n" , diameter);

        //compute area
        float area = PI * (radius * radius);
        printf("\tArea: %0.3f\n" , area);

        //compute circumference 
        float circumference = 2 * PI * radius; 
        printf("\tCircumference: %0.3f\n" , circumference);

        return 0;
    }

   
    return 0;
}