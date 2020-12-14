#include <stdio.h>
#include <string.h>

int main(void)
{
    char stringA[] = "Hello, World!";
    char stringB[] = "Hello, World!";

    //%p --> address of the memory
    //%s --> string
    printf("String A: %s - %p\n", stringA, stringA);
    printf("String B: %s - %p\n", stringB, stringB);

    printf("%s the same. \n", (stringA == stringB) ? "T" : "Not");
    //will print "Not the same." because the adresses in memory are being compared
    // and stringA and stringB takes on two different places in memory so two differen addresses
    
    return 0;
}