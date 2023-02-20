class Solution {
public:
    int fib(int n) 
    { 
        int a = 0, b = 1,res;
        if(n < 2)       return n;
        if(n == 2)      return 1;
        for(int i = 2; i <= n; i++)
        {
            res = a + b;
            a = b;
            b = res;
        }
        return res;
    }
};