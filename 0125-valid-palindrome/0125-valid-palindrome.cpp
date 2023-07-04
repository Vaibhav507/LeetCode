class Solution {
public:
    bool isPalindrome(string s) 
    {
        string z;
        for(int i=0 ;i<s.size();i++)
            if(isalnum(s[i])) 
                z+=tolower(s[i]);
        s=z;
        if(z.length()==0)
            return true;
        int last=z.length()-1;
        int first=0;
        while(z[first]==z[last] && first<last)
        {
            first++;
            last--;
        }
        if(first==last || last<first)
            return true;
        else
            return false;
        return false;
}
};