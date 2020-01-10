#include <iostream>
using namespace std;

class Base
{
    public:
        void ohbascestivde()
        {
            cout << "pd";
        }
};

class Derived
{
    public:
        void sayprout()
        {
            cout << "prout !";
        }
};

int main() {
    Derived d;
    Base *ptr = &d;

    ptr->ohbascestivde(); //ok
    ptr->sayprout(); //not ok
    return 0;
}