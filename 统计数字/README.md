### 统计数字

```
计算数字k在0到n中的出现的次数，k可能是0~9的一个值
```

### 样例

```
例如n=12，k=1，在 [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]，我们发现1出现了5次 (1, 10, 11, 12)
```

### CODE

```c++
class Solution {
public:
    /**
     * @param k: An integer
     * @param n: An integer
     * @return: An integer denote the count of digit k in 1..n
     */
    int digitCounts(int k, int n) {
        int count = 0;
         if (k == 0) {
            count = 1;
        }
        for (int i = 1; i <= n; i++) {
            int number = i;
            while (number > 0) {
                if (number % 10 == k) {
                    count += 1;
                } 
                number /= 10;
            }
        }
        
        return count;
    }
};
```

### 解析

从1开始遍历到n，每个数每除10看余数即**个位**，从最后一位到最高位进行判断是否等于K。