class Solution {
public:
    long long sum(vector<int>& nums) {
        long long total=0;
        for(auto i:nums) total+=i;
        return total;
    }
    long long largestPerimeter(vector<int>& nums){
        sort(nums.begin(),nums.end());
        long long total=sum(nums);
        for(int i=nums.size()-1;i>=2;i--){
            if(total-nums[i]>nums[i]) return total;
            total-=nums[i];
        }
        return -1;
    }
};