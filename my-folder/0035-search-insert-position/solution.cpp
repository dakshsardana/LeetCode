class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int a=nums.size()-1;
        int i=0;
        
        while(i <= a){
            int mid= i+ (a-i)/2;
            if(nums[mid] < target)i = mid+1;
            else if(nums[mid] > target) a= mid-1;
            else return mid; 
        }
       
        return i; 
    }
};
