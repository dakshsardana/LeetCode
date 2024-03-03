class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxN=nums[0];
        for(int i=0;i<nums.size();++i){
            if(maxN>=nums.size()-1) return true;
            if (nums[i] == 0 and maxN == i) return false;
            if(i+nums[i]>maxN) maxN=i+nums[i];
        }
        return true;
    }
};
