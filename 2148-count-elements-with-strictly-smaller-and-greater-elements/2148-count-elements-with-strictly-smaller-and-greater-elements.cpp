class Solution {
public:
    int countElements(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int i=0,count=0;
        int mx=nums[nums.size()-1];
        int mn=nums[0];
        while(i<nums.size())
        {
            if(nums[i]>mn && nums[i]<mx)
                count++;
            i++;
        }
        return count;
    }
};