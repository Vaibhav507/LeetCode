class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        vector<string> ans;
        string s;
        int start=0,end=0;
        while(start<nums.size())
        {
            int end=start;
            while(end+1<nums.size() && nums[end]+1==nums[end+1])
                end++;
            if(start<end)
                s=to_string(nums[start])+"->"+to_string(nums[end]);
            else
                s=to_string(nums[start]);
            ans.push_back(s);
            s="";
            start=end;
            start++;
            
        }
        return ans;
        
    }
};