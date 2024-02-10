class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()<=1) return s;
        int maxLen=1;
        int st=0,end=0;
        //for odd length
        for(int i=0;i<s.length()-1;i++){
            int l=i,r=i;
            while(l>=0 && r<s.length()){
                if(s[l]==s[r]){
                    l--;r++;
                }
                else break;
            }
            int len=r-l-1;
            if(len>maxLen){
                maxLen=len;
                st=l+1;
                end=r-1;
            }
        }
        //for even length
        for(int i=0;i<s.length()-1;i++){
            int l=i,r=i+1;
            while(l>=0 && r<s.length()){
                if(s[l]==s[r]){
                    l--;r++;
                }
                else break;
            }
            int len=r-l-1;
            if(len>maxLen){
                maxLen=len;
                st=l+1;
                end=r-1;
            }
        }
        return s.substr(st,maxLen);
        
    }
};
