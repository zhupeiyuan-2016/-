#include <iostream>
using namespace std;
int main()
{
    int a[100], flag, n, temp, min,i;
    while (cin >> n && n != 0)
    {
        for ( i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        min = a[0];
        for (int j = 0; j < n; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                flag = j;
            }
        }
        if (min < a[0])
        {
            temp = a[0];
            a[0] = min;
            a[flag] = temp;
        }
        for ( i = 0; i < n - 1; i++)
        {
            printf("%d ", a[i]);
        }
        printf("%d\n", a[i]);
    }
    return 0;
}