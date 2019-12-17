#include <iostream>
using namespace std;

int SimpleInterest(int P,int T,int R)
{
    float SI;
    
    SI = P*T*R/100.0;

    return SI;
}

int main()
{
    int p,t,r;

    p = 100;
    t = 10;
    r = 2;

    cout << "interest " << SimpleInterest(p, t, r) << endl;
    return 0;
}