class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int i=digits.size()-1;
        
        if(i==0 && digits[i]==9)
        {
            digits[i]=0;
            digits.insert(digits.begin(),1);
            return digits;
        }
            
        
        if(digits[i]!=9 && i>=0)
        {
            digits[i]++;
            return digits;
        }
        
        
        if(digits[i]==9 && i>=0)
        {     
            digits[i-1]++;
            digits[i]=0;
            while(digits[i-1]>=10 && i!=0)
            {
                i--;
                if(i==0)
                {
                    digits[i]=0;
                    digits.insert(digits.begin(),1);
                    break;
                }
                else
                {
                   digits[i]=digits[i]%10;
                    digits[i-1]++; 
                }
            }
            return digits;
        }
        
        return {};
    }
};