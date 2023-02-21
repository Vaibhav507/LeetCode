class Solution {
public:
    vector<int> buildArray(vector<int>& nums) 
    {
        int n=nums.size();
        int a[n];
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            a[i]=nums[nums[i]];
        }
        for(int i=0;i<n;i++)
            ans.push_back(a[i]);
        return ans;
    }
};