#include <iostream>
#include<iomanip>
#define PI 3.1415927

using namespace std;


int main(void)
{
    double r,volume;
    while(cin>>r)
    {
        volume=PI*r*r*r*4/3;
        cout <<setiosflags(ios::fixed)<<setprecision(3)<<volume << endl;
    }

    return 0;
}

