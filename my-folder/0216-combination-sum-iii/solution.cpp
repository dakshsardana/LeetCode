class Solution {
public:
    void solve(int s,int k,int target,vector<int> &x,vector<vector<int>>&ans){
        if(target==0 and k==0){
            ans.push_back(x);
            return;
        } 
        if(target<=0 || k<=0) return;
        for(int i=s;i<=9;i++){
            if(target<i) break;
            x.push_back(i);
            solve(i+1,k-1,target-i,x,ans);
            x.pop_back();
        } 
    }
    vector<vector<int>> combinationSum3(int k, int target) {
        vector<vector<int>> ans;
        vector<int> x;
        solve(1,k,target,x,ans);
        return ans;
    }
};
