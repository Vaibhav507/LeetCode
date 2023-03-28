class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        map<int,int> a;
        vector<pair<int,int>> ans;
        for(int i=0;i<nums.size();i++)
        {
            a[nums[i]]++;
        }
        for(auto it:a)
        {
            ans.push_back({it.second,it.first});
        }
        sort(ans.rbegin(),ans.rend());
        
        vector<int> t;
        
        for(int i=0;i<k;i++){
            t.push_back(ans[i].second);
        }
        
        return t;
    }
};