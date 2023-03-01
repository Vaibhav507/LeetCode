class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int a=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=a)
                break;
            a++;
        }
        return a;
    }
};