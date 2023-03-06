class Solution {
public:
    int climbStairs(int n) {
        if(n <=2) return n;
        int x=1,a=2;
        for(int i=3;i< n;i++){
            int temo=a;
            a += x;
            x=temo;
        }
        return(x+a);
    }
};