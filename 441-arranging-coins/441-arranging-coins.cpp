class Solution {
   public:
    int arrangeCoins(int n) {
    int i = 0 ;
    for( ; n-i>=0 ; i++ ) n=n-i;
    return i-1;       
    }
};