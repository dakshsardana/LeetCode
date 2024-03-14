class Solution {
public:
int findPivot(vector<int>& nums,int n){
    int s=0;
    int e=n-1;
    if(nums[s]<=nums[e]) return 0;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(((mid-1)>=0) and (nums[mid]<nums[mid-1]))return mid;
        else if(nums[e]<=nums[mid]) s=mid+1;
        else if( nums[mid]>=nums[n-1] and nums[s] < nums[mid]) s=mid;
        else e=mid-1;
    }
    return s;
}
    int findMin(vector<int>& nums) {
        int ans=findPivot(nums,nums.size());
        return nums[ans];
    }
};
