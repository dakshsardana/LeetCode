class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> array;
        vector<int> :: iterator it;
        for(it= nums.begin(); it !=nums.end(); it++){
            int ele = *it;
            if(find(array.begin(),array.end(),ele) != array.end()){
                nums.erase(it);
                it--;
            }
            else{
                array.push_back(*it);
            }
        }
        return nums.size();
    }
};
