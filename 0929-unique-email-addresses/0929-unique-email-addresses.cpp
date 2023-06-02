class Solution {
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        unordered_set<string> umap;
        int pos=0;
        for(int i=0;i<emails.size();i++)
        {
            for(int j=0;j<emails[i].length();j++)
            {
                if(emails[i][j]=='+')
                {
                    pos=j;
                    while(emails[i][j]!='@')
                        j++;
                }
                if(emails[i][j]=='@')
                {
                    if(pos!=0)
                        emails[i].erase(emails[i].begin()+pos,emails[i].begin()+j);
                    break;
                }
                if(emails[i][j]=='.')
                    emails[i].erase(emails[i].begin()+j);
            }
            pos=0;
        }
        for(int i=0;i<emails.size();i++)
            cout<<emails[i]<<endl;
        for(int i=0;i<emails.size();i++)
            umap.insert(emails[i]);
        return umap.size();
        
    }
};