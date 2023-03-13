class Solution {
public:
    int mySqrt(int x) {
        double y=0;
        if(x<0) return false;
        while((y*y)<=x){
            y++;
        }
    return y-1;   
    }
};