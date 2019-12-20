#include <iostream>
using namespace std;

template<class T>
T Max(T a, T b) {
    return (a > b) ? a : b;
}

int main()
{
    cout << Max(10, 5) << endl;
    cout << Max(12.5f, 8.03f) << endl; 
}