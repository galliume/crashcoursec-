#include <iostream>
#include <cmath>
using namespace std;

float roots(int a, int b, int c)
{
    float root1;

    root1 = (-b + sqrt(b * b  - 4 * a * c)) / (2 * a);

    return root1;
}

int main()
{
	int a,b,c;
	cout << "Enter a b c";
	cin >> a >> b >> c;

	cout << " result " << roots(a, b, c);

	return 0;
}
