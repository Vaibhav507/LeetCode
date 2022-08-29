class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) 
    {

        int count = 0;
        unordered_set<int> s(nums.begin(),nums.end());
        for(auto i : s)
            if(s.count(i+diff) && s.count(i-diff))
                        count++;
        return count;

    }
};