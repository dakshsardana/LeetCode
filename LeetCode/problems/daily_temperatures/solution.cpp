class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> answer(n, 0);
        vector<int> stack;
        for (int i = n- 1; i >= 0; --i) {
            int currTemperature = temperatures[i];
            while (!stack.empty() && currTemperature >= temperatures[stack.back()]) {
                stack.pop_back();
            }
            if (!stack.empty()) {
                answer[i] = stack.back() - i;
            }stack.push_back(i);
        }
        return answer;
    }
};