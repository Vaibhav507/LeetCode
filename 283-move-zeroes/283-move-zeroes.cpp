class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int n=nums.size()-1,temp=0,t=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                t++;
            }
        }
        for(int j=0;j<=t;j++)
            {
            for(int i=0;i<n;i++)
            {
                if(nums[i]==0&&nums[i+1]!=0)
                {
                    temp=nums[i+1];
                    nums[i+1]=nums[i];
                    nums[i]=temp;
                }
            }
        }
    }
};