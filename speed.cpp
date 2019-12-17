#include <iostream>
using namespace std;

int CalculateSpeed(int u,int v,int a)
{
    float speed;
    
    speed = ((v*v) - (u*u)) / (2*a);
    
    return speed;
    
}

int main()
{
    int u,v,a;
    cout << "Enter u,v,a";
    cin >> u >> v >> a;
    cout << CalculateSpeed(u, v, a);
    return 0;
}