class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    vector<int>sk;
     for(int i=0;i<nums.size();i++){
         int n=nums[i]*nums[i];
         sk.push_back(n);
     }
        sort(sk.begin(),sk.end());
        return sk;
    }
};