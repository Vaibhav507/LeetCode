class Solution {
public:
    int firstUniqChar(string s) {
        
        int n=s.length();
        int arr[256]={0};// default value of data present at all the indices are zero.
        for(int i=0;i<n;i++)
        {
            arr[s[i]]=arr[s[i]]+1;// Increases the count by 1
        }
        
         for(int i=0;i<n;i++)
        {
            if(arr[s[i]]==1)
                return i;
        }
        
        return -1;
    }
};