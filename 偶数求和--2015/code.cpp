#include <iostream>
using namespace std;
int main()
{
	int n,m;
	int a[100];
	while(cin>>n>>m&&m<=n&&n<=100)
	{       
		for(int i=0;i<n;i++)
		{
			a[i]=2*(i+1);
		}

		if(n%m==0)
		{
			for(int j=0;j<n;j+=m)
			{
				cout<<(a[j]+a[j+m-1])/2;
				if(j+m-1==n-1)
				{
					cout<<endl;
				}
				else
					cout<<" ";
			}

		}
		else
		{
			int k=(int(n/m))*m;
			for(int j=0;j<k;j+=m)
			{
				cout<<(a[j]+a[j+m-1])/2<<" ";
			}
			int s=0;
			for(int j=k;j<n;j++)
			{
				s+=a[j];
			}
			cout<<s/(n-k)<<endl;	
		}

	}
	return 0;
}