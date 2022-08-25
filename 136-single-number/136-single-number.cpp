class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int i=0;
        if(nums.size()==1)
            return nums[i];
        sort(nums.begin(),nums.end());
        while(i<nums.size())
        {
            if(nums[i]==nums[i+1])
               i=i+2;
            else
                return nums[i];
        }
          return {};

    }
};