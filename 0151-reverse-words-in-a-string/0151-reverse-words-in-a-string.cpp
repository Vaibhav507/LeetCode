class Solution {
public:
    string reverseWords(string s) 
    {
        vector<string> a;
        stringstream b(s);
        string words;
        while(b>>words)
            a.push_back(words);
        reverse(a.begin(),a.end());
        words="";
        for(int i=0;i<a.size();i++)
        {
            words=words+a[i];
            if(i==a.size()-1)
                break;
            words=words+' ';
        }
        return words;
    }
};