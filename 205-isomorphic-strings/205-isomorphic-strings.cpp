class Solution {
public:
    bool isIsomorphic(string s, string t)
    {
        char arrs[256]={0};
        char arrt[256]={0};
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.length();i++)
        {
            if(arrs[s[i]]!=arrt[t[i]])
            {
                return false;
            }
            arrs[s[i]]=i+1;
            arrt[t[i]]=i+1;
        }

          
        
        
        
        return true;
    }
};