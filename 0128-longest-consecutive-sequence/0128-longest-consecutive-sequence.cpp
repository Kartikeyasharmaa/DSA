class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int lastsmaller=INT_MIN;
        int cnt=0;
        int longest=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]-1==lastsmaller)
            {
                cnt+=1;
                lastsmaller=nums[i];
            }
            else if(lastsmaller!=nums[i])
            {
                cnt=1;
                lastsmaller=nums[i];
            }
            longest=max(longest,cnt);
        }
        return longest;
    }
};