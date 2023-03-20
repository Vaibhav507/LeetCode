class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        int size=nums.size();
        size=size*2;
        vector<int> ans(size,0);
        for(int i=0;i<size/2;i++)
            ans[i]=nums[i];
        for(int i=0;i<size/2;i++)
            ans[i+(size/2)]=nums[i];
        return ans;
    }
};