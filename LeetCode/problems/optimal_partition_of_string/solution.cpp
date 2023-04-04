class Solution {
public:
    int partitionString(string s) {
        vector <int> count(26,0);
        int a=1;
        for(int i=0;i<s.size();i++){
            if(count[s[i]-'a']++ > 0  ){
                fill(count.begin(),count.end(),0);
                count[s[i]-'a']++;
                ++a; 
            }
        }
        return a;   
    }
};