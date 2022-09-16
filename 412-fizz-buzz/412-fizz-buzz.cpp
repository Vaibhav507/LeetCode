class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> ans;
        ans.push_back("0");
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && i%5==0)
                ans.push_back("FizzBuzz");
            else if(i%3==0)
                ans.push_back("Fizz");
            else if(i%5==0)
                ans.push_back("Buzz");
            else
            {
                string str = to_string(i);
                ans.push_back(str); 
            }   
        }
        ans.erase(ans.begin());
        return ans;
    }
};