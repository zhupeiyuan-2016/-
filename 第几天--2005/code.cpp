#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int year,mouth,day;
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    while(scanf("%d/%d/%d",&year,&mouth,&day)!=EOF)
    {
          n=0;
          for(i=0;i<mouth;i++)
          n+=a[i];
          n+=day;
          if((year%4==0&&year%100!=0)||(year%400==0))
               if(mouth>2)
               n++;
          cout<<n<<endl;
    }
    return 0;
}
