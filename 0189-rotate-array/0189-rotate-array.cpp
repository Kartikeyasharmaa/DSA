class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;
        k = k % n;  
        if (k == 0) return; 
        
        vector<int> temp;
        for(int i =n-k;i<n;i++)
        {
            temp.push_back(nums[i]);
        }
        for(int i=n-k-1;i>=0;i--)
        {
            nums[i+k]=nums[i];
        }
        for(int i=0;i<k;i++)
        {
            nums[i]=temp[i];
        }
        
    }
};