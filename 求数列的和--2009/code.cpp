#include <iostream>  
#include<stdio.h>  
#include <cmath>  
using namespace std;  
int main()  
{  
    double n,m,t=0;  
    while (cin>>n>>m&&n<10000&&m<1000)  
    {  
        t=0;  
        while (m--)  
        {  
            t=t+n;  
            n=sqrt(n);  
        }  
        printf("%.2f\n",t);  
    }  
    return 0;  
}  
