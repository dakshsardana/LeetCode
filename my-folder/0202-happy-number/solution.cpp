class Solution {
public:
int fn(int n){
    int s=0;
    while(n){
        int temp=n%10;
        s+=(temp*temp);
        n/=10;
    }
    return s;    
}
    bool isHappy(int n) {
        int a=n,b=n;
        do{
            a=fn(a);
            b=fn(fn(b));
        }while(a!=b);
        return a==1;
        
        }
    
        
};
