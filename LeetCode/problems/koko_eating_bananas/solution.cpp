class Solution {
public:
 long long findHours(vector<int> &nums,long long speed){
    // long long totalHours=0;  
    // for(auto i:nums){
    //     long long val=i; 
    //     if(val<speed) totalHours+=1; 
    //     else if(val%speed==0) totalHours+=(val/speed);  
    //     else totalHours+=(val/speed+1);
    // }    
    // return totalHours;
    // }
    long long count = 0;
    for(auto itr:nums) {
        count += (itr/speed + (itr%speed != 0));
    }
    return count;
}

    int minEatingSpeed(vector<int>& piles, int h) {
        long long high = 1e10, low = 1;
        long long ans = low;
        while(low <= high) {
            int mid = (low + high)/2;
            if(h >= findHours(piles, mid)) {
                ans = mid;
                high = mid - 1;
            } else 
                low = mid + 1;
        }
        return ans;
    }
};