class Solution {
public:
    bool isPalindrome(int x) 
    {
        string convertedNumber = to_string(x);
        string reverseString = convertedNumber;
        reverse(reverseString.begin(),reverseString.end());
        if(reverseString == convertedNumber)
            return true;
        else 
            return false;
    }
};