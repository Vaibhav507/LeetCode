class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) 
    {
        sort(costs.begin(),costs.end());
        int a=0;
        for(int i=0;i<costs.size();i++)
        {
            if(coins-costs[i]==0)
            {
                a++;
                break;
            }
            if(coins-costs[i]>0)
            {
                a++;
                coins-=costs[i];
            }
        }
        return a;
    }
};