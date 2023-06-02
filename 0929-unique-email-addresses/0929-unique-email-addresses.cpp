class Solution {
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        unordered_set<string> umap;
        int pos=0;
        for(auto &s: emails)
        {
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='+')
                {
                    pos=i;
                    while(s[i]!='@')
                        i++;
                }
                if(s[i]=='@')
                {
                    if(pos!=0)
                        s.erase(s.begin()+pos,s.begin()+i);
                    break;
                }
                if(s[i]=='.')
                    s.erase(s.begin()+i);
            }
            pos=0;
            umap.insert(s);
        }
        return umap.size();
        
    }
};