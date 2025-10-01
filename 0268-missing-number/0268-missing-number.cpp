
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int XOR1=0;
        int XOR2=0;
        for(int i=0;i<n;i++)
        {
            XOR2=XOR2 ^ nums[i];
            XOR1=XOR1 ^ (i+1);
        }
        return XOR1 ^ XOR2;
    }
};