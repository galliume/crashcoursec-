#include <iostream>
#include<cmath>
using namespace std;

float distance(int x1,int y1,int x2,int y2)
{
    float dist;
    
    dist = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2) );
    
    return dist;
}

int main()
{
    int x1, y1, x2, y2;
    x1 = 3;
    y1 = 2;

    x2 = 7;
    y2 = 8;

    cout << "Distance " << distance(x1, y1, x2, y2);
    return 0;
}