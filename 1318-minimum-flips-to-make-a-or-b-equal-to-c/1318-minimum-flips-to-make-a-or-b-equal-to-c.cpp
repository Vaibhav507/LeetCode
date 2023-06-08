class Solution {
public:
    int minFlips(int a, int b, int c) 
    {
        int count=0;
        while(a|| b || c)
        {
            if(c&1)
            {
                if(!(a&1) && !(b&1))
                    count++;
            }
            else
            {
                if((a&1)&&(b&1))
                    count=count+2;
                else if((a&1) || (b&1))
                    count++;
                    
            }
            a=a>>1;
            b=b>>1;
            c=c>>1;
        }
        return count;
    }
};