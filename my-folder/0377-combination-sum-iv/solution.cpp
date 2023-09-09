class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        if(target==0)return 1;

        if (target<0)return 0;
        vector<unsigned long long> dp(target+1,0);
        dp[0]=1;

        for(int i=1;i<=target;i++){
            for(int index=0;index<nums.size();index++){
                int currentNum=nums[index];
                if (i- currentNum>=0){
                    dp[i]+=dp[i-currentNum];
                }
            }
        }
        return dp[target];
    }
};
