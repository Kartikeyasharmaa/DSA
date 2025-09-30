class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
            if (count > 1) return false;
        }

        return true;
    }

    void rotatearray(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;

        k = k % n;
        if (k == 0) return;

        vector<int> temp;

        // Copy last k elements
        for (int i = n - k; i < n; i++) {
            temp.push_back(nums[i]);
        }

        // Shift remaining elements to the right
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        // Copy back temp elements
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};
