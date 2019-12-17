#include <iostream>
using namespace std;

float CylinderVolume(int radius,int height)
{
    float volume;
    
    volume = 3.14 * radius*radius * height;
    
    return volume;
}

int main()
{
    int r,h;
    r = 3;
    h = 10;
    cout << "Volume " << CylinderVolume(r, h) << endl;
    return 0;
}