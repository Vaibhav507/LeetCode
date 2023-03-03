class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int low=0;
        int high=arr.size()-1;
        int mid;
        while(low<high)
        {
            mid=(high+low)/2;
            cout<<arr[mid]<<" ";
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
                break;
            if(arr[mid]<arr[mid+1])
                low=mid;
            if(arr[mid]>arr[mid+1])
                high=mid;
        }
        return mid;
    }
};