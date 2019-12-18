#include <iostream>
using namespace  std;

void CheckAge(int age)
{
    
    //write conditional statement here
    //output must be all in lower case
    if (12 <= age && 50 >= age) {
        cout << "young";
    } else {
        cout << "not young";
    }
}

int main()
{
    CheckAge(12);
    return 0;
}