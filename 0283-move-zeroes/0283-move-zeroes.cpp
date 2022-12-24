class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int j=nums.size(),i=0;
        while(i<j)
        {
            if(nums[i]==0)
            {
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                j--;
            }
            else
                i++;
        }
    
    }
};