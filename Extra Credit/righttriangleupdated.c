#include <stdio.h>

int main(void){

    //functions
    int b;
    int p;
    int h;

    //Scan in the values b, p, h
    printf("What is the base of the triangle?");
    scanf("%d", &b);
    printf("What is the perpendicular of the triangle?");
    scanf("%d", &p);
    printf("What is the hypotenuse of the triangle?");
    scanf("%d", &h);

    //Apply Pythagorean Theorem
    if((h*h) == (b*b)+(p*p))
    {
        //case 1:
        //if true print out it is a right triangle
        printf("It is a right triangle!");

     }
     else if((h*h) > (b*b)+(p*p))
     {
        //case 2: (h*h) > (b*b)+(p*p);
    
            //if h^2 is larger print out it is an obtuse triangle
            printf("It is an obtuse triangle!");
     }
     else if((h*h) < (b*b)+(p*p))
     {
        //case 3: (h*h) < (b*b)+(p*p);
        
            //if h^2 is smaller print out it is an acute triangle
            printf("It is an acute triangle!");
    }
    else
    {
        //Case 4: Not a triangle 
            printf("It is not a triangle!");
    }
    
    

    return 0;
    }