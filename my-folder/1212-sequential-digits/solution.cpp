class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        for (int i = 1; i <= 9; ++i) {
            int num = i;
            int num2 = i + 1;
            while (num <= high && num2 <= 9) {
                num = num * 10 + num2;
                if (low <= num && num <= high) ans.push_back(num);
                ++num2;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
