class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int i=0;
        
        sort(costs.begin(),costs.end());
        int temp=0;
        for (i;i<costs.size();i++){
            if (coins< costs[i]) break;
            coins -= costs[i];
            temp++;
        }
    return temp;
    }
};