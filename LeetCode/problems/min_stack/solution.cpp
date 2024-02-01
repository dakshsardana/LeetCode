class MinStack {
public:
    stack<long long int> st;
    long long int min;
    MinStack() {}  
    void push(long long int val) {
        if (st.empty()) {
            min = val;
            st.push(val);
        }
        else if(val >= min) {
            st.push(val);
        } 
        else if(val < min) {
            st.push((2 * val)-min);
            min = val;
        }
    }
    
    void pop() {
        if(st.empty())return;
        long long ele=st.top();
        st.pop();
        if(ele<min){
            min=2*min-ele;
        }
    }   
    int top() {
        if(st.empty())return -1;
        else if(st.top()>=min)return st.top();
        else return min;
    }
    
    int getMin() {
        return st.empty() ? 0 : min;    
        }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */