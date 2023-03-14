class Solution {
public:
    int maxArea(vector<int>& height) {
        int mini=height[0];
        int maxi=height[height.size()-1];
        int a=0;
        int b=height.size()-1;
        if(maxi<mini){
            mini=maxi;
            a=b;
            maxi=height[0];
            b=0;


        }
        int w=height.size()-1;
        int maxarea= mini*w;
        while(w>0){
            int c= a;
            while(height[c] <= mini){
                if(a<b){
                    c++;
                }
                else{
                    c--;
                }
                w--;
                if(w<1)
                    break;
            }
            if(height[c]> maxi){
                mini=maxi;
                a=b;
                b=c;
                maxi=height[c];

            }
            else{
                a=c;
                mini=height[c];

            }
            maxarea=max(maxarea,w*mini);
        }
        return maxarea;
    }
};
