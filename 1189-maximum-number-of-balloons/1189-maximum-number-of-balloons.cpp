class Solution {
public:
    int maxNumberOfBalloons(string text) 
    {
        vector<int> freq(26,0);
        int ans;
        for(int i=0;i<text.length();i++)
            freq[text[i]-'a']++;
        
        freq['l'-'a']=freq['l'-'a']/2;
        freq['o'-'a']=freq['o'-'a']/2;
        
        ans=min({freq['b'-'a'],freq['a'-'a'],freq['l'-'a'],freq['o'-'a'],freq['n'-'a']});
        
        return ans;
    }
};