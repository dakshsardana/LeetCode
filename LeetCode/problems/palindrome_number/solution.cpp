class Solution {
public:
    bool isPalindrome(int x) {
       
        unsigned int temp;
        temp=x;
        unsigned int b=0;
        while (temp>0){
            int last= temp %10;

            b = b *10+last;
            temp=temp/10;
        
        
        }
        if(x==b){
            return true;
        } 
        else{
            return false;
        }
    }
};