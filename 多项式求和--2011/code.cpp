#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i,j;
	double sum;
	int m,n;
	int t;
	
	while(cin>>m&&m>0&&m<100)
	{   
		for(i=0;i<m;i++)
		{
			cin>>n;
			sum=1; 
			t=-1;
			for(j=1;j<n;j++)
			{
				sum+=1.0/(j+1)*t;
				t=-t;
			}
			cout<<setiosflags(ios::fixed)<<setprecision(2)<<sum<<endl;
		}

	}
	return 0;
}
