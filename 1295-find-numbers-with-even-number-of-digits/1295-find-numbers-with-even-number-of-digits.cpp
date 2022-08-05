class Solution {
public:
    
    int count_digits(int n)
        {
            string num = to_string(n);
            return num.size();
        }
    
    int findNumbers(vector<int>& nums) 
    {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count_digits(nums[i])%2==0)
                count++;
        }
        return count;
    }
};