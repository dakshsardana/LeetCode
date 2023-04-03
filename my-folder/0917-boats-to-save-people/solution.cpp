class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int start=0,end=people.size()-1;
        int boat=0;
        while(start<=end){
            int n=people[start]+people[end];
            if(n<=limit) start++;
            end--;
            boat++;
        }
        return boat;
    }
};
