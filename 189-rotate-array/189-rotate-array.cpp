class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n= nums.size();
		
		//Reverse all the elements
        reverse(nums.begin(), nums.end());
		
		//Reverse first k elements
        reverse(nums.begin(), nums.begin()+k%n);
		
		// Reverse remaining elements after k
        reverse(nums.begin()+k%n, nums.end());
        return;
    }
};