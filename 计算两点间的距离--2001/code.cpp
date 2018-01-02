#include<iostream>
#include <math.h>
#include <iomanip>

using namespace std;


int main()
{
    double x1, y1, x2, y2;
    double distance;

    while(cin >> x1 >> y1 >> x2 >> y2){
        distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
        cout << setprecision(2) << fixed << distance << endl;
    }


    return 0;
}

