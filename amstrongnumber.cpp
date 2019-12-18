#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 153;
    int m = n;
    int r = 0;
    int sum = 0;

    while (n != 0) {
        r = n % 10;
        n = n / 10;

        sum = sum + pow(r, 3);
    }

    if (sum == m) {
        cout << m << " is an amstrong number." << endl;
    } else {
        cout << m << " is not an amstrong number." << endl;
    }
}