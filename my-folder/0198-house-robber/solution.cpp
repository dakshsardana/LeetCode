class Solution {
public:
    int rob(vector<int>& nums) {
        int a=0,b=0;
        for(int i=0;i<nums.size();i++){
            int c= b+nums[i];
            int d=max(a,b);
            a=c;
            b=d;
        }
        return max(a,b);
    }
};
