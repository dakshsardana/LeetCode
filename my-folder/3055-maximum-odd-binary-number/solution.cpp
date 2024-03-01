class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        // sort(s.rbegin(),s.rend());
        // for(int i=s.size()-1;i>=0;i--){
        //     if(s[i]=='1'){
        //         swap(s[i],s[s.size()-1]);
        //     }
        // }
        int cnt1=0;
        int cnt0=0;
        string str;
        for(int i=0;i<=s.size();i++){
            if(s[i]=='1') cnt1++;
            if(s[i]=='0') cnt0++;
        }
        for(int i=0; i<cnt1-1; i++){
        str += '1';
    }
    for(int i=0; i<cnt0; i++){
        str += '0';
    }
    str += '1';
        return str;
    }
};
