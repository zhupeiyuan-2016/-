#include<iostream>
using namespace std;
int main()
{
    char a, b, c, d;
    while(cin >> a >> b >> c){
        if (a > b)  {d = a; a = b; b = d;}
        if (b > c)  {d = b; b = c; c = d;}
        if (a > b)  {d = a; a = b; b = d;}
    }
    cout << a << ' ' << b << ' ' << c << endl;
    return 0;

}


0 0 0 1
0 1 1 0
2 2 3 4 