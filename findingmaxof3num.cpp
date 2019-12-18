#include <iostream>
using namespace std;

void Max3(int a,int b,int c)
{

//write nested if statements to print maximum of 3 numbers
    int max = a;
    max = (max < b) ? b : max;
    max = (max < c) ? c : max;

    cout << max;
}

int main()
{
    Max3(42, 4, 23);
    return 0;
}