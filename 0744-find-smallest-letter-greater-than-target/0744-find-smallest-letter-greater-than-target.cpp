class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        int left=0,right=letters.size()-1,mid;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(letters[mid]>target)
                right=mid-1;
            else
                left=mid+1;
        }
        
        return left == letters.size() ? letters[0] : letters[left];
    }
};