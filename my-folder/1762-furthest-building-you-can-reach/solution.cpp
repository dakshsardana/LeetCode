class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> maxDiff;
        int height=0;
        int i=0;
        for(i=0;i<heights.size()-1;i++){
            height=heights[i+1]-heights[i];
            if(height<=0) {
                continue;
            }
            bricks-=height;
            maxDiff.push(height);
            if(bricks<0){
                bricks+=maxDiff.top();
                maxDiff.pop();
                ladders--;
            }
            if(ladders<0) break;
        }
    return i;
    }
};
