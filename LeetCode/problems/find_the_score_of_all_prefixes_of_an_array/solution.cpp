class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> ans;
        long long sum = 0, m = 0;
        for(auto n: nums){
            if(m < n) m = n;
            sum += n + m;
            ans.push_back(sum);
        }
        return ans;
    }
};