#include <iostream>
using namespace std;

void Eligible(int age)
{
    
    //write condition here to check if person is eligible
    if (12 > age || 50 < age) {
        cout << "eligible";
    } else {
        cout << "not eligible";
    }
}

int main()
{
    Eligible(15);
    return 0;
}