class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int sum=0;
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++)
        {
		mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            int a=it.second;
            sum+=((a)*(a-1)/2);
        }

	return sum;
    }
};