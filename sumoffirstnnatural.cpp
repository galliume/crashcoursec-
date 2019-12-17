#include <iostream>
using namespace std;

int sumOfN(int n)
{
    int sum;

    //Write formula here as sum=
    sum = (n * (n + 1)) / 2;

    return sum;
}


int main()
{

	cout << sumOfN(5);

	return 0;
}
