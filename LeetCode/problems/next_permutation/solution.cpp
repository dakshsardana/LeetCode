class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size()-1, k ;
        for(int i = n; i>0; i--){
            if(nums[i] > nums[i-1]){
                k = i;
                break;
            }
        }
        if(k==0){
            sort(nums.begin(), nums.end());
        }
        else{
            int swap = nums[k-1];
            int min = INT_MAX;
            
            for(int j = k; j <= n ; j++){
                if(nums[j]-swap > 0 && nums[j]-swap <= min){
                    int temp = nums[j];
                    nums[j] = nums[k-1];
                    nums[k-1] = temp;
                }
            }
            sort(nums.begin()+k, nums.end());
        }
    }
};