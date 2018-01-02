#include <iostream>  
using namespace std;  
int main()  
{  
    float n,i,a=0,b=0,c=0;  
    while (cin>>n&&n!=0&&n<100)  
    {  
        a=0;b=0;c=0;  
        while (n--)  
        {  
            cin>>i;  
            if(i<0)  
                a++;  
            else if(i==0)  
                b++;  
            else  
                c++;  
  
        }  
        cout<<a<<" "<<b<<" "<<c<<endl;  
    }  
}  
