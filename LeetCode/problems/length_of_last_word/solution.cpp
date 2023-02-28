class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string w;
        while(ss >> w){}
        return w.length();
    }
};