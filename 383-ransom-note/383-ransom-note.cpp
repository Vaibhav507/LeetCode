class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        int arrM[256]={0};
        int arrR[256]={0};
        bool ans=true;
        for(int i=0;i<magazine.size();i++)
        {
            arrM[magazine[i]]=arrM[magazine[i]]+1;
        }
         for(int i=0;i<ransomNote.size();i++)
        {
            arrR[ransomNote[i]]=arrR[ransomNote[i]]+1;
        }
        for(int i=97;i<=122;i++)
        {
            if(arrR[i]>arrM[i])
                ans=false;
        }
        return ans;
    }
};