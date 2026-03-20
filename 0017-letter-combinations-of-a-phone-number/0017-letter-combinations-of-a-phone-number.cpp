class Solution {
private:
    // Global constant array for ultra-fast mapping. Index matches the digit.
    const char* pad[10] = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void backtrack(const string& digits, int index, string& current, vector<string>& result) {
        // Base case: If the current combination is the same length as digits, we are done
        if (index == digits.length()) {
            result.push_back(current);
            return;
        }

        // Get the letters that the current digit maps to
        int digit = digits[index] - '0';
        const char* letters = pad[digit];

        // Iterate through these letters and explore each branch
        for (int i = 0; letters[i] != '\0'; ++i) {
            current.push_back(letters[i]);         // Choose a letter
            backtrack(digits, index + 1, current, result); // Explore deeper
            current.pop_back();                    // Undo the choice (Backtrack)
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        // Edge case: empty input
        if (digits.empty()) return {};

        vector<string> result;
        string current;
        
        // Start the DFS tracking from index 0
        backtrack(digits, 0, current, result);
        
        return result;
    }
};