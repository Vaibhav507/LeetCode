class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        string ans;
        int a=0,b=0;
        int m=word1.length();
        int n=word2.length();
        while(a<m || b<n)
        {
            if(a<m)
                ans+=word1[a];
            if(b<n)
                ans+=word2[b];
            a++;
            b++;
        }
        return ans;
            
    }
};