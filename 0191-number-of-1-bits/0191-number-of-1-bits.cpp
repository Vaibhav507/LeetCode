class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        string x;
        x = to_string(n);
        double a=stod(x);
        int ans=0;
        cout<<a<<endl;
        for(int i=32;i>=0;i--)
        {
            if(a-pow(2,i)>0)
            {
                ans++;
                a-=pow(2,i);
            }   
            if(a-pow(2,i)==0)
            {
                ans++;
                break;
            }
        }
        return ans;
    }
};