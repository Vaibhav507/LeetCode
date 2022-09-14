class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end(), greater<int>());
        int a=nums[0],b,c;
        int counta=0,countb=0,countc=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=a)
            {
               b=nums[i];
                break; 
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=a && nums[i]!=b)
            {
                 c=nums[i];
                countc++;
                break;
            }
        }
        if(countc==0)
            return a;
        else
            return c;
    }
};