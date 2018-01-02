#include <iostream>

using namespace std;

int main(void)
{
    int m,n,square_sum=0,cube_sum=0,temp,t;
    while(cin>>m>>n)
    {
        //当m>n时候需要调换m,n的值
        if(m>n)
        {
            t=m;
            m=n;
            n=t;
        }

        temp=m;
        for(int i=0; i<=n-m; i++)
        {
            //偶数则求平方
            if(temp%2==0)
            {
                square_sum+=temp*temp;
                ++temp;
            }
            else//奇数求立方
            {
                cube_sum+=temp*temp*temp;
                ++temp;
            }
        }

        cout<<square_sum<<" "<<cube_sum<<endl;
        square_sum=0;
        cube_sum=0;
    }
    return 0;
}
