class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int j=1,i=0,count=1;
        while(j<nums.size())
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
            }
                j++;  
        }    
          
        
        return i+1;
    }
};