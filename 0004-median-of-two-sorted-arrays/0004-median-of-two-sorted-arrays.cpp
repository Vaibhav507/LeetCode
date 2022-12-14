class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        for(int i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int n=nums1.size()-1;
        if(nums1.size()%2==0)
        {
            double a=1.0*nums1[n/2];
            double b=1.0*nums1[(n+1)/2];
            return (a+b)/2;
        }
        else
        {
            return (nums1[n/2]);
        }
        return {};
    }
};