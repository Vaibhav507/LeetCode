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
        for(string ite:a)
        {
            words=words+ite;
            words=words+' ';
        }
        words.erase(words.end()-1);
        return words;
    }
};