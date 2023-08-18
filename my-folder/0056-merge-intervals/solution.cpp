class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(int i = 0;i<n;i++){
            // suppose we have 8,9 and 1,6 so we know that 8,9 cannot be part of 1,6 so 8,9 will makes it new interval
            if(ans.empty() || intervals[i][0] > ans.back()[1]){
                ans.push_back(intervals[i]);
            }
            else{
                // lying inside suppose we have 2,4 and 1,3 which means that 2,4 is lying inside so
                ans.back()[1] = max(ans.back()[1],intervals[i][1]);
            }
        }
        return ans;
    }
};
