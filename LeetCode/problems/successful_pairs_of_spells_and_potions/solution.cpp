class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int> ans;

        for(int i=0;i<spells.size();i++){
            long long target =ceil(floor(success)/spells[i]);
            int j=lower_bound(potions.begin(),potions.end(),target)-potions.begin();
            ans.push_back(potions.size()-j);

            
        }
        return ans;
    }
};