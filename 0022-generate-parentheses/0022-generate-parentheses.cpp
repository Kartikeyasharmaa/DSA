class Solution {
public:
    void generate(vector<string> &ans, string str ,int open,int close, int n){
        if (n == open && n == close){
            ans.push_back(str);
            return;
        }
        if (open>close) generate(ans, str+")", open, close+1, n);
        if (open<n) generate(ans, str+"(", open+1, close, n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(ans, "", 0,0,n);
        return ans;
    }
};