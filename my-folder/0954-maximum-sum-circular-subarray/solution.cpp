class Solution {
public:
int kadaneAlgo(vector<int>& nums,int n){
        int max_sum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=nums[i];
            max_sum=max(max_sum,ans);
            if(ans<0) ans=0;
        }
        return max_sum;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int op1,op2;
        int total_sum=0;
        int cnt=0;
        int min=INT_MIN;
        bool containNegative=false;
        for(int i=0;i<n;i++){
            total_sum+=nums[i];
            if(nums[i]<0)
            {
                containNegative=true;
                cnt++;
                min=max(min,nums[i]);
            }
        }
        if(containNegative==false){
        return total_sum;
        }
        else if(cnt==n){
            return min;
            }
        else{
            op1=kadaneAlgo(nums,n);
            for(int i=0;i<n;i++){
                nums[i]=-nums[i];
            }
            int x=kadaneAlgo(nums,n);
            op2=total_sum+x;
            
        }
                    return max(op1,op2);

    }
    };


