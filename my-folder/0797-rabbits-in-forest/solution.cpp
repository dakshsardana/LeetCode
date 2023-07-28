class Solution {
public:
    int numRabbits(vector<int>& answer) {
        map<int,int> m;
        for(int i=0;i<answer.size();i++){
            m[answer[i]]++;
        }
        int ans=0;
        for (auto e: m){
            int grf=e.first+1;
            int grs=e.second;
            int mg=(grs/grf)+((grs%grf)?1:0);
            int f=grf*mg;
            ans+=f;
        }        
        return ans;
    }
};
