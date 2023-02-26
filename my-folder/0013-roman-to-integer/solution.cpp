class Solution {
public:
    int romanToInt(string s) {
        map<char, int>m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int n=s.size();
        int total=m[s.back()];
        for(int i=n-2;i>=0;i--){
            if(m[s[i]]<m[s[i+1]])
                total-=m[s[i]];
            else
                total+=m[s[i]];
        }
        return total;
    }
};
