class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int ans=0;
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.push_back(0);
        for(int i=1;i<flowerbed.size()-1;++i)
        {
            if(flowerbed[i-1]==0 && flowerbed[i]==0 && flowerbed[i+1]==0 && n)
            {
                n--;
                i++;
            }
        }
        if(n==0)
            return true;
        else
            return false;
    }
};