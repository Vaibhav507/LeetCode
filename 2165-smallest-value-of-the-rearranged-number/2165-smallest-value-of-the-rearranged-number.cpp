class Solution {
public:
    long long smallestNumber(long long num) 
    {
        vector<long long> nums;
        long long a=0;
        int temp;
        int zero=0;
        bool flag=false;
        if(num>0)
            flag=true;
        else
        {
            flag=false;
            num=num*(-1);
        }
        
        if(flag)
        {
            while(num/10>0)
            {
                temp=num%10;
                if(temp==0)
                    zero++;
                else
                    nums.push_back(temp);
                num=num/10;
            }
            nums.push_back(num);
            
            sort(nums.begin(),nums.end());
            a=a+nums[0];
            while(zero>=0)
            {
                a=a*10;
                zero--;
            }
            for(int i=1;i<nums.size();i++)
            {
                a=a+nums[i];
                a=a*10;
            }
            a=a/10;
        }
        else
        {
            while(num/10>0)
            {
                temp=num%10;
                nums.push_back(temp);
                num=num/10;
            }
            nums.push_back(num);
            
            sort(nums.rbegin(), nums.rend());
            for(int i=0;i<nums.size();i++)
            {
                a=a+nums[i];
                a=a*10;
            }
            a=a/10;
            a=a*-1;
        }
        
        return a;
    }
};