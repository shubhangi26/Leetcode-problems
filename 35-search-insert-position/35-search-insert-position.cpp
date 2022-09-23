class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int low=0,high=nums.size()-1;
        int l=-1;
        while(low<=high){
        int mid = low+(high-low)/2;
        if (nums[mid]==target) return mid;
        else if(nums[mid]>target) high = mid-1;
        else
        {
            l=mid;
            low=mid+1;
        }
        }
        return l+1;
    }
};