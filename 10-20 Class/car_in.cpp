#include <iostream>
#include <string>

//Base Class
class Vehicle
{
    public: 
        std::string brand = "Ferrari";

        void honk()
        {
            std::cout << "Tuut, tuut! \n";
        }
};

//Derived Class
//new class inherit the members of an existing class
class FormulaOne: public Vehicle
{
    public: 
        std::string model = "SF90";
};

//Main Class
int main()
{
    //create the object of the new class
    FormulaOne myCar;
    myCar.honk();

    std::cout << myCar.brand + " " + myCar.model;
}