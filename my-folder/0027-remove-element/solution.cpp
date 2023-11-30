class Solution {
public:
      int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator da;
        da=nums.begin();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums.erase(da);
                da--;
                i--;
            }
            da++;
        }
    return nums.size();
    }
};
