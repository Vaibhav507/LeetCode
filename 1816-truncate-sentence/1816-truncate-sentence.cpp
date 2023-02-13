class Solution {
public:
    string truncateSentence(string s, int k) 
    {
        string ans;
        int t=0;
        int i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==' ')
                t++;
            if(t==k)
                break;
        }
        ans=s.substr(0,i);
        return ans;
    }
};