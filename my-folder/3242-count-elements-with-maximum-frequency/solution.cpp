class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int nums2[101], strt=0, cnt=0;
        for (int x: nums){
            nums2[x]++;
            cnt+=(nums2[x]==strt);
            if (nums2[x]> strt) cnt=1, strt=nums2[x];
        }
        return cnt*strt;
    }
};
