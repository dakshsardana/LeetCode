class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int y=INT_MAX;
        int p=0;
        for(int i=0;i<prices.size();i++){
            y=min(prices[i],y);
            p=max(p,prices[i]-y);
        }
        return p;
    }
};
