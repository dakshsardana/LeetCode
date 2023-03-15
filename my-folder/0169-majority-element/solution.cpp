class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int a=nums.size();
        sort(nums.begin(),nums.end());
        return nums[a/2];
        
    }
};
