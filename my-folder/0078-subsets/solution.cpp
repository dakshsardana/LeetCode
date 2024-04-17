class Solution {
public:
void sub(vector<int> &ip, vector<int> &x,vector<vector<int>>&ans,int s){
            ans.push_back(x);
            for(int i=s;i<ip.size();i++){
                if(i != s && ip[i] == ip[i-1]) continue;
                x.push_back(ip[i]);
                sub(ip, x, ans,i+1 );
                x.pop_back();
                // sub(nums, i+1, temp, ans);
            }
            
        }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> x; 
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        sub(nums, x, ans, 0); 
        return ans;
    }
};
    
