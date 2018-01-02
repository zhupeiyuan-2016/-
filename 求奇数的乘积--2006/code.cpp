#include <iostream>
using namespace std;
int main()
{
  int n,t,x=1;
  while(cin>>n)
  {
     x=1;
    while (n--)
    {
     cin>>t;
       if(t%2==1)
       x=x*t;
    }
    cout<<x<<endl;
  }

}
