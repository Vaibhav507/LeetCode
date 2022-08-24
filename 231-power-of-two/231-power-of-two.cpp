class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        long int pow = 1;
        while (pow < n)
            pow *= 2;
        return (pow == n);
    }
};