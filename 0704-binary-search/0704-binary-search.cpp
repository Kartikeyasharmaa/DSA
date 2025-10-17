class Solution {
public:
    int search(vector<int>& nums, int target) {
        return bs(nums,0,nums.size()-1,target);
    }
    int bs(vector<int>&nums,int low,int high,int target)
        {
            int n=nums.size();
            if(low>high) return -1;
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(target>nums[mid])
            {
                return bs(nums,mid+1,high,target);
            }
            else
            {
               return bs(nums,low,mid-1,target);
            }
        }
        
    
};