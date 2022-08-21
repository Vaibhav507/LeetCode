class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int pivot=0,l=0,suml=0,sumr=0;
        for(int i=0;i<nums.size();i++)
        {
            sumr=sumr+nums[i];
        }
        while(pivot<nums.size())
        {
            suml=suml+nums[pivot];
            if(suml-nums[pivot]==sumr-suml)
                return pivot; 
            pivot++;
        }
        return -1;
    }
};