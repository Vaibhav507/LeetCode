class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string s=strs[0];
        int t=0;
        
        for(int i=1;i<strs.size();i++)
        {
           while(t!=s.size())
           {
               if(s[t]!=strs[i][t])
                   break;
               t++;
           }
           s=s.substr(0,t);
            t=0;
        }
        return s;
    }
};