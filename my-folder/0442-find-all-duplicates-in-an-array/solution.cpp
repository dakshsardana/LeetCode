class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        if(nums.size()<=1) return result;
        for(int i=0;i<nums.size();i++){
            int num=abs(nums[i]);
            int index=num-1;
            if(nums[index]<0) result.push_back(num);
            nums[index]*= -1;
        }
        return result;
    }
};
