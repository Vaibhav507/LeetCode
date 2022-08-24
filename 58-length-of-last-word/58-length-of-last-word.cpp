class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int i=0,count=0;
        int l=s.length();
        while(s[l-1]==' ')
            l--;
        while(i<l)
        {
            if(s[i]!=' ')
                count++;
            else
                count=0;
            i++;
        }
        return count;
        
    }
};