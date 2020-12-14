#include <iostream>
#include <string> 

class HelloClass 
{
    public: 
        int myNum;
        std::string greeting;

};

int main()
{
    HelloClass myObj; //create an object of MyClass

    //Acess attributes and set values
    myObj.myNum = 15; 
    myObj.greeting = "Hello C++ Class!";

    //Print Values
    std::cout << myObj.myNum << "\n";
    std::cout << myObj.greeting << std::flush; //std::flush is similar to std::endl
}