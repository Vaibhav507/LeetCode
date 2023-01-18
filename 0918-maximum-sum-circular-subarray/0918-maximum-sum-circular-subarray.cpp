class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums1) 
    {
        int maxSum = INT_MIN, curMax = 0,minSum = INT_MAX, curMin = 0,total=0;
        int n=nums1.size();
        for (int i = 0; i < n; i++) 
        {  
            curMax = max(curMax + nums1[i], nums1[i]);
            maxSum = max(maxSum, curMax);
            curMin = min(curMin + nums1[i], nums1[i]);
            minSum = min(minSum, curMin);
            total += nums1[i];
            
        }
    return maxSum > 0 ? max(maxSum, total - minSum) : maxSum;
    }
};