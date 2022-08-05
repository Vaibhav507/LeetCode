class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int count=0,max=0,temp=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
                temp=count;
            }
            else if(nums[i]==0)
                count=0;
            if(max<temp)
                max=temp;
        }
        return max;
       
    }
};