#include <iostream>
#include <string>

int main()
{
    std::string food = "Pizza";

    //Creating pointer of food
    std::string *ptr = &food;

    //Creating references to refer to the food variable
    std::string &meal = food;

    //Output the food value
    std::cout << food << "\n";

    //Output the memory address of food with the pointer
    std::cout << &food << "\n";

    //Output the memory address of food with teh pointer
    std::cout << ptr << "\n";

    //Output the food value
    std::cout << meal << "\n";

    return 0;
}