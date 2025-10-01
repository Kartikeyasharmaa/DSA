
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = -1;

        // Step 1: pehla zero dhoondo
        for(int i=0; i<n; i++) {
            if(nums[i] == 0) {
                j = i;
                break;
            }
        }

        // agar zero hi nahi mila to return
        if(j == -1) return;

        // Step 2: agle elements check karo
        for(int i=j+1; i<n; i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
