class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size() && nums[i]<=0) {
            i++;
        }
        if(i==nums.size()) return 1;
        int c=1;
        while(i<nums.size()) {
            if(nums[i]!=c)
                return c;
            while(i<nums.size() && nums[i]==c) {
                i++;
            }
            c++;
        }
        return c;
    }
};
