class Solution {
public:
    int maximumCount(vector<int>& nums) 
    {
        int pos=0,neg=0;
        for(int a:nums)
            if(a>0)
                pos++;
            else if(a<0)
                neg++;
        return max(pos,neg);
    }
};