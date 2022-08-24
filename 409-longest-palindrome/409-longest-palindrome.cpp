class Solution {
public:
    int longestPalindrome(string s) 
    {
        int arr[256]={0};
        int count=0;
        int flag=0;
        for(int i=0;i<s.length();i++)
        {
            arr[s[i]]++;
        }
        
        for(int i=0;i<256;i++)
        {
            if(arr[i]%2==0)
                count=count+arr[i];
            else
            {
                flag=1;
                count=count+arr[i]-1;
            }

        }
        
        
        return count+flag;
    }
};