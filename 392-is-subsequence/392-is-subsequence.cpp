class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int si=0,ti=0;
        while(ti<t.length())
        {
            if(s[si]==t[ti])
            {
                ti++;
                si++;
            }
            if(s[si]!=t[ti])
            {
                ti++;
            }
        }
        if(si==s.length())
                return true;
            else
                return false;
    }
};