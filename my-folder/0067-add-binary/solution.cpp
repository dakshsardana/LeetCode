class Solution {
public:
    string addBinary(string a, string b) {
       
        int alen=a.size();
        int blen=b.size();
        string s;
        if(alen>blen){
            b=s.append(alen-blen,'0')+b;
            
        }
        else if(blen>alen){
             a=s.append(blen-alen,'0')+a;
        }
        string srn;
        int c=0;
        for(int i= a.size()-1;i>=0;i--){
            int sum= (a[i]-'0')+(b[i]-'0')+c;
            srn=to_string(sum%2)+srn;
            c=sum/2;
        }
        if(c !=0)srn= "1"+srn;
        return srn;
    }
};
