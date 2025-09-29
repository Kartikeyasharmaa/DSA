class Solution {
public:
    bool isPalindrome(int x) {
       
        long long revnum = 0;
        int dup = x;
        while(x>0)
        {
            int lastdigit = x % 10;
            revnum = (revnum * 10) + lastdigit;
            x/=10;
        }
        if(dup==revnum) cout<<"true";
        else cout<<"false";
        return dup==revnum;
        
    }
};