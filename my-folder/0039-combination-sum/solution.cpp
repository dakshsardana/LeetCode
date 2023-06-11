class Solution {
public:
 vector<vector<int>> ans;
 void sum(int i, vector<int>& arr, vector<int>& temp, int target){
     if (target<0) return;
     if(target==0){
         ans.push_back(temp);
         return;
     }
     if(i==arr.size()) return;
     sum(i+1,arr,temp,target);
     temp.push_back(arr[i]);
     sum(i,arr,temp,target-arr[i]);
     temp.pop_back();
 }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        ans.clear();
        vector<int> temp;
        sum(0,arr,temp,target);
        return ans;
    }
};
