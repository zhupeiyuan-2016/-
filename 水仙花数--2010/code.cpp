#include<iostream>
using namespace std;
int main()
{
 int m,n;
 while (cin>>m>>n)
 {
  int x,y,z;
  int r=0;
  int a[1000]={0};
  for(int i=m;i<=n;i++)
  {
   x=i/100;
   y=(i-x*100)/10;
   z=i-x*100-y*10;
   if(i==x*x*x+y*y*y+z*z*z)
   {
    a[r]=i;
    r++;
   }
  }
  if(r==0)
   cout<<"no"<<endl;
  else
  {
   for (int j=0;j<r-1;j++)
   {
   cout<<a[j]<<" ";
   }
   cout<<a[r-1]<<endl;
  }
 }
 return 0;
}
