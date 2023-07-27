class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
      int j = 0;

    for(int i=0; i < nums.size(); i++)
        if(!(nums[i] % 2))
            swap(nums[i], nums[j++]);
    return nums;
}  

};
