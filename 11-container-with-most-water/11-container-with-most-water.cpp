class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int l=0;
        int h=height.size()-1;
        int max=0;
        int area=0;
        while(l<h)
        {
                area=min(height[h],height[l])*(h-l);
            if(area>max)
                max=area;
            if(height[l]>height[h])
                h--;
            else
                l++;
        }
        return max;
    }
};