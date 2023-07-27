class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
   vector<int>even;
        vector<int>odd;
        vector<int>v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        int l=0;
        int m=0;
        for(int i=0;i<n;i++){
            if(i%2==0) {
                v.push_back(even[l]);
                l++;
            }
            else{
                v.push_back(odd[m]);
                m++;
            }
        }
        return v;
    }
};