class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) 
    {
        int i=0;
        vector<int> a;
        while(i<nums.size()-1)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]*=2;
                nums[i+1]=0;
                i++;
            }
            else
                i++;
        }
        i=0;
        int j=nums.size()-1;
        while(i<nums.size())
        {
            if(nums[i]==0)
                a.push_back(0);
            i++;
        }
        while(j>=0)
        {
            if(nums[j]!=0)
                a.push_back(nums[j]);
            j--;
        }
        reverse(a.begin(),a.end());
        return a;
    }
};