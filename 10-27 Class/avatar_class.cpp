#include <iostream>

//Base Class
class Avatar
{
    protected:
        int attackPower;

    public:
        void setAttackPower(int atk)
        {
            attackPower = atk;
        }
};

//Dereived Classes
class Teemo: public Avatar
{
    public:
        void attack()
        {
            std::cout << "TOXIC SHOT!" << attackPower << std::endl;
        }
};

class Annie: public Avatar
{
    public:
        void attack()
        {
            std::cout << "DISINTEGRATE!" << attackPower <<std::endl;
        }
};