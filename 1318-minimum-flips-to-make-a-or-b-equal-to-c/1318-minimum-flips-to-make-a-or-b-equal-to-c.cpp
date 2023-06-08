class Solution {
public:
    int minFlips(int a, int b, int c) 
    {
        int d=a|b;
        int count=0;
        while(d || c)
        {
            d=a|b;
            bool a1=a&1;
            bool b1=b&1;
            bool c1=c&1;
            bool d1=d&1;
            if(c1)
            {
                if(d1)
                {  
                }
                else
                    count++;
            }
            else
            {
                if(d1 && a1 && b1)
                {
                    count=count+2;
                    cout<<"2"<<" ";
                    
                }  
                else if(d1 && a1 || b1)
                {
                    count++;
                    cout<<"1"<<" ";
                }
                    
            }
            a=a>>1;
            b=b>>1;
            c=c>>1;
            d=d>>1;
        }
        return count;
    }
};