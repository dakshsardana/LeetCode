class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int a=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                a++;
            }
        }
        if(nums[n-1]>nums[0]){
            a++;
        }
        return a<=1;
    }
};