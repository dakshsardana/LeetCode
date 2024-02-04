class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)return 1;
        if(n < 0) {
            x = 1 / x;
        } 
        double count =1;
        long num=labs(n);
        while(num){
            if(num & 1){
                count*=x;
            }
            x*=x;
            num>>=1;

        }return count;
    }
};
