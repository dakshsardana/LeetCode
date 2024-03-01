class Solution {
public:
    int hammingDistance(int x, int y) {
    int cnt=0;
    int l=x^y;
    while (l>0){
        cnt++;
        l=l&(l-1);
    }
    return cnt;
    }
};
