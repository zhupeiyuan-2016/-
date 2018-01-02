#include <iostream>  
using namespace std;  
int peach[31];  
int main()  
{  
    int n;  
    while(cin>>n)  
    {  
        peach[n]=1;  
        while(n>1)  
        {  
            peach[n-1]=(peach[n]+1)*2;  
            --n;  
        }  
        cout<<peach[1]<<endl;  
    }  
    return 0;  
}  