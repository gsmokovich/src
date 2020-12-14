#include <iostream>

class Employee
{
    private: 
        int myAge;

    public:
        //public getter method to get age
        int getAge()
        {
            return myAge;
        }

        void setAge(int age)
        {
            if (age < 1)
            {
                std::cout << "Please enter age greater than 1" << endl;
            }
        }
}