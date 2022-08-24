class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        long int pow = 1;
        while (pow < n)
            pow *= 4;
        return (pow == n);
    }
};