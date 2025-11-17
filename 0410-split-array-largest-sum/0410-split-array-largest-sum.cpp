

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(), nums.end());
        int r = accumulate(nums.begin(), nums.end(), 0);

        auto check = [&](int m) -> bool {
            int count = 1;
            int sum = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (sum + nums[i] > m) {
                    count++;
                    sum = 0;
                }
                sum += nums[i];
            }
            return count <= k;
        };
        int ans = -1;
        while (l <= r) {
            int m = l + (r - l) / 2;

            if (check(m)) {
                ans = m;
                r = m - 1;
            } else
                l = m + 1;
        }
        return ans;
    }
};