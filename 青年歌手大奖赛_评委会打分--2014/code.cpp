#include <iostream>
using namespace std;
int main(void)  
{  
    int n;  
  
    while(cin>>n) {  
        // 定义变量并且初始化  
          int score, sum=0, max=0, min=101, i; 
        // 读入n个分数，并且求和、算最大值和最小值  
        for(i=1; i<=n; i++) {  
            cin>>score;
            sum += score;  
            max = (score > max) ? score : max;  
            min = (score < min) ? score : min;  
        }  
         printf("%.2f\n", (float)(sum - max - min) / (n -2));  
    }  
  
    return 0;  
}  
