class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //     unordered_map<int,int> un;
    //     for(auto a:nums)un[a]++;
    //     for(auto a:un){
    //         if(a.second!=2)
    //             return a.first;
    //     }
    //     return -1;
    // }
    int xorr=0;
    for(int i=0;i<nums.size();i++){
        xorr=xorr^nums[i];
    }
    return xorr;
    }
};

