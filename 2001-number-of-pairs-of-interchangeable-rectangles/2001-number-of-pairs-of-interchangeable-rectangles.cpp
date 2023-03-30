class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) 
    {
        long long result=0;
        unordered_map<double,int> mp;
        for(int i=0;i<rectangles.size();i++)
        {
            double d=(double)rectangles[i][0]/rectangles[i][1];
            if(mp.find(d)!=mp.end())
                result+=mp[d];
            mp[d]++;
        }

        return result;
    }
};