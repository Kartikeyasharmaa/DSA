class Solution {
public:
    bool isPalindrome(string s) {
        string newStr = "";
        for (char i : s) {
            if (isalnum(i)) {
                newStr += tolower(i);
            }
        }
        int l = 0, r = newStr.size() - 1;
        while (l < r) {
            if (newStr[l++] != newStr[r--]) return false;
        }
        return true;
    }
};