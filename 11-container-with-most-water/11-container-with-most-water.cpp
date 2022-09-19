class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int l=0,h=height.size()-1,max_amt=0,area=0;
        while(l<h)
        {
            area=min(height[h],height[l])*(h-l);
            max_amt=max(max_amt,area);
            if(height[l]>height[h])
                h--;
            else
                l++;
        }
        return max_amt;
    }
};