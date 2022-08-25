class Solution {
public:
    bool isPalindrome(string s) {
string z ;

    for(int i=0 ;i<s.size() ; i++ )
        if(isalnum(s[i])) 
        z+= tolower(s[i]);
        s  = z;
    reverse(z.begin(), z.end());
 
    return (z==s);
}
};