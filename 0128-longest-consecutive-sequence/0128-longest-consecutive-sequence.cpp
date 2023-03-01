class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int count=0,ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
            cout<<nums[i];
        if(nums.size()==1)
            return 1;
        if(nums.size()==0)
            return 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]+1==nums[i])
                count++;
            else if(nums[i-1]==nums[i])
                continue;
            else
                count=0;
            ans=max(ans,count);
        }
        return ans+1;
    }
};