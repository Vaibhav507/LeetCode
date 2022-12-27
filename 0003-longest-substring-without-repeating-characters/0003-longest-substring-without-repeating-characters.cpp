class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int f=0,l=0;
        int ans=0,temp=0;
        if(s.size()==1)
            return 1;
        if(s.size()==0)
            return 0;
        while(l!=s.size())
        {
            l++;
            for(int i=f;i<l;i++)
            {
                ans=max(ans,l-f);
                if(s[i]==s[l])
                {
                    f=i+1;
                    break;
                }    
            }
            
        }
        return ans;
    }
};