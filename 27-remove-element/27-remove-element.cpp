class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int i=0,j=nums.size();
        while(i<j)
        {
            if(nums[i]==val)
            {
                nums.erase(nums.begin()+i);
                j--;
            }
            else
                i++;
        }
        cout<<i-j;
        return i;
    }
};