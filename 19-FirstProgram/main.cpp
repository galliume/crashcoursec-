#include <iostream>
using namespace std;
int main()
{
//	int a,b,c;
//
//	cout << "Enter 2 numbers";
//	cin >> a >> b;
//
//	c = a+b;
//
//	cout << "Sum is " << c << endl;

	string name;

	cout << "Name ";
	//cin >> str; 1 word
	getline(cin, name); // full line

	cout << "Hello " << name << endl;

    return 0;
}
