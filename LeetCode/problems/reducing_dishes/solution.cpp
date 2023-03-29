class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n=satisfaction.size();
        int p=0,res=0;
        for(int i=n-1;i>=0 && satisfaction[i]+res>0;i--){
            res+=satisfaction[i];
            p+=res;
        
        }
        return p;
    }
};