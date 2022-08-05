class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int pivot, left = 0, right = nums.size() - 1;
        if(nums[right]<target)
            return right+1;
        if(nums[left]>=target)
            return left;
        
        while (left <= right) 
        {
            pivot = left + (right - left) / 2;
            if (nums[pivot] == target) 
                return pivot;
            if (target < nums[pivot]) 
                right = pivot - 1;
            else 
                left = pivot + 1;
            if(nums[pivot]>target&&target>nums[pivot-1])
                return pivot;
        }
    return -1;
    }
};