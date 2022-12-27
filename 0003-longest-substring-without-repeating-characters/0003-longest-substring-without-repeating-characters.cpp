class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int f=0,l=0;
        int ans=0;
        if(s.size()==1)
            return 1; //test case
        if(s.size()==0)
            return 0; //test case
        while(l!=s.size())
        {
            l++; //increasing length of sliding window
            for(int i=f;i<l;i++)
            {
                ans=max(ans,l-f); //getting length of sliding window
                if(s[i]==s[l]) //if same character occurs size of sliding window is changed from same character to end
                {
                    f=i+1;
                    break;
                }    
            }
        }
        return ans;
    }
};