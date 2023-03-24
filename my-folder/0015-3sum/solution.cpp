class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            int a=nums[i];
            int b =-a;
            int c=i+1,d=n-1;
            while(c<d){
                if(nums[c]+nums[d]==b){
                    ret.push_back({nums[i],nums[c],nums[d]});
                    while(c<d && nums[c]==nums[c+1]) c++;
                    while(c<d && nums[d]==nums[d-1]) d--;
                    c++;
                    d--;
                }
                else if(nums[c]+nums[d]>b){
                    d--;

                }
                else{
                    c++;
                }
            }
            while(i+1<n && nums[i+1]==nums[i])i++;
        }
        return ret;
    }
}; 
            
