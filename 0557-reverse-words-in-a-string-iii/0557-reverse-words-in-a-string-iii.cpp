class Solution {
public:
    string reverseWords(string s)
    {
        int j=0,i=0;
        while(i<=s.size())
        {
            if(s[i]==' ' || i==s.size())
            {
                reverse(s.begin()+j,s.begin()+i);
                j=i+1;
            }
            i++;
        }
        return s;
    }
};