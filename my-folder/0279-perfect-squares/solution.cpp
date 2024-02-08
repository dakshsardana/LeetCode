class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1,0);
        for(int i=0;i<=n;++i){
            int minVal=i;
            int j=1,sq=1;
            while(sq<=i){
                minVal=min(minVal,1+ dp[i-sq]);
                j++;
                sq=j*j;
            }
            dp[i]=minVal;
        }
        return dp[n];
    }
};
