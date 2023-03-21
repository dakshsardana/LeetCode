class Solution {
public:
void generate(vector<string> &v,int n, int i, int j, string s){
    if(i==n && j==n){
        v.push_back(s);
        return ;
    }
    if(i<n){
        generate(v,n,i+1,j,s+"(");
    }
    if(j<i){
        generate(v,n,i,j+1,s+")");
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        int i=0,j=0;
        generate(v,n,i,j,"");
        return v;
    }
};
