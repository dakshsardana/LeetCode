class Solution {
public:
    void solve(vector<int> &ip, vector<vector<int>>&ans,vector<int> &x,int s,int target){
        if(target==0){
            ans.push_back(x);
            return;
        }
        
            for(int i=s;i<ip.size();++i){
                if(i != s && ip[i] == ip[i-1]) continue;
                if(ip[i]>target)break;
                x.push_back(ip[i]);
                solve(ip,ans,x,i+1,target-ip[i]);
                x.pop_back();
            } 
        }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<int> x; 
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        solve(nums, ans,x, 0,target); 
        return ans;    
    }
};
