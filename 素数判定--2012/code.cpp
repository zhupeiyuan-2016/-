#include <iostream>
using namespace std;
 
bool is_prime(int n) {
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
 
int main()
{
    int a,b,m=0;
    while (cin>>a>>b)
    {
        if(a==0&&b==0)
            break;
        m = 1;
        for(int n=a;m && n<=b;n++)
        {
            if(!is_prime(n * n + n + 41)) {
                m = 0;
            }
        }
        if(m==1)
            cout<<"OK"<<endl;
        else
            cout<<"Sorry"<<endl;
    }
    return 0;
}