#include <iostream>

using namespace std;

int main()
{
    int n = 153;
    int r = 0;
    int reverse = 0;

    while (n != 0) {
        r = n % 10;
        n = n / 10;

        reverse = reverse * 10 + r;
    }

    cout << n << "  reversed " << reverse << endl;
   
}