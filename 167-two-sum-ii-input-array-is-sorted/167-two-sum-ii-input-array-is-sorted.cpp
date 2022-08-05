class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n = numbers.size();
        int first =0;
        int last = n-1;
        vector<int> result(2);
        
        while(first<=last)
        {
            int sum = numbers[first]+numbers[last];
            if(sum==target)
            {
                result[0]= first+1;
                result[1]=last+1;
                break;
            }
            else if(sum < target)
                first++;
            else
                last--;
        }
        return result;
        
    }
};