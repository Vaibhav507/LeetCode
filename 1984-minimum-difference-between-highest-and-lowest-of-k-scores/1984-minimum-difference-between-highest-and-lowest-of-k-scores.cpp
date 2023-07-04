class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        int first=0;
        int last=k-1;
        int res=INT_MAX;
        while(last<nums.size())
        {
            res=min(res,nums[last]-nums[first]);
            first++;
            last++;
        }
        return res;
            
    }
};