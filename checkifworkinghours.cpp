#include <iostream>
using namespace std;

void Working(int hour)
{
    //write condition here to print "working" or "leisure"
    if (9 <= hour && 18 >= hour) {
        cout << "working" << endl;
    } else {
        cout << "leisure" << endl;
    }

    
}

int main()
{
    Working(7);
} 