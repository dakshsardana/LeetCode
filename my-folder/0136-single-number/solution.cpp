class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> un;
        for(auto a:nums)un[a]++;
        for(auto a:un){
            if(a.second!=2)
                return a.first;
        }
        return -1;
    }
};
