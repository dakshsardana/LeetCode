class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        while (columnNumber) {
            columnNumber--;
            char c = 'A' + columnNumber % 26;
            result = c + result;
            columnNumber /= 26;
        }
        return result;
    }
};
// recursive approach
// class Solution {
// public:
//     string convertToTitle(int columnNumber) {
//         if (columnNumber == 0) return "";
//         columnNumber--;
//         char c = 'A' + columnNumber % 26;
//         return convertToTitle(columnNumber / 26) + c;
//     }
// };

