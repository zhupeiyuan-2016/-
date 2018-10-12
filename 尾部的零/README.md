### 尾部的零

```
设计一个算法，计算出n阶乘中尾部零的个数
```

### 样例

```
11! = 39916800，因此应该返回 2
```

### CODE

```c++
class Solution {
public:
    /*
     * @param n: A long integer
     * @return: An integer, denote the number of trailing zeros in n!
     */
    long long trailingZeros(long long n) {
        // write your code here, try to do it without arithmetic operators.
        long long sum = 0;
        long long t=5;
        while(t<=n){
            sum += n/t;
            t = 5*t;
        }
        return sum;
 
    }
};
```

### 解析

该题最简单的算法，即可简单分为两步，首先求出N!，然后计算末尾0的个数。

但是很显然这种方法的复杂度会随着N值的变大而激剧变大，**故显然不是最优解**

重新分析题目，可从数学角度来再次查看，尾部为**0**的个数，而产生**0**后缀总是由**质因子2**和**质因子5**相乘得来的，又可明显得到2的数量多于5的数量，所以，**这个问题就变成了有多少个5的问题**。