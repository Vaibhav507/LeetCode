class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int l,r;
        unordered_map<int, int> map;
        for(auto i : nums)
            map[i]++;
            
        
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]--;
            if(map[nums[i]]==0) map.erase(nums[i]);
            if(map.find(target-nums[i])!=map.end())
                l=i; 
        }
        
        for(int i = 0; i<nums.size() ; i++)
        {
            if(nums[i] + nums[l]==target && l!=i)
            {
                r = i;
                break;
            }
        }
        
        return {l,r};
    }
};