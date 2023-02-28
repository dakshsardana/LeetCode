class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count=0,min=1000;
        string str;
        for (int i=0;i<strs.size();i++){
            int len=strs[i].length();
            if(len<min){
                min=len;
                str=strs[i];

                }
            }
        for(int k=0;k<min;k++){
            for (int j=0;j<strs.size();j++){
                if(strs[j][k]!=str[k]){
                    return str.substr(0,count);
                }

            }
            count++;
        }    
        return str.substr(0,count);

        }
    
};