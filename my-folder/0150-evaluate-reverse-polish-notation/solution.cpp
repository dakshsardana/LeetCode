class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto i: tokens){
            //conditions
            if(i == "+" || i == "-" || i == "/" || i == "*"){
                int sec=st.top();
                st.pop();
                int first=st.top();
                st.pop();
                //cases
                if(i == "+"){
                    st.push(first + sec);
                }
                if(i == "-"){
                    st.push(first - sec);
                }
                if(i == "*"){
                    st.push(first * sec);
                }
                if(i == "/"){
                    st.push(first / sec);
                }

            }
            //if data instead of operator(conversion)
            else{
                stringstream ss(i);
                int d;
                ss>>d;
                st.push(d);
            }
        }
        return st.top();
    }
};
