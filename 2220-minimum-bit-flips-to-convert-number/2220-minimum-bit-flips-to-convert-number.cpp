class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int count=0;
        while(start || goal)
        {
            bool start1=start&1;
            bool goal1=goal&1;
            if(start1)
            {
                if(goal1)
                {  
                }
                else
                    count++;
            }
            else
            {
                if(goal1)
                    count++;
            }
            start=start>>1;
            goal=goal>>1;
        }
        return count;
    }
};