class Solution {
public:
    int findMin(vector<int>& nums) {
      int s = 0,e=nums.size()-1;
        while (s<e){
            if (nums[s]<nums[e]) return nums[s];
            int mid =s+(e-s)/2;
            if(nums[mid]>=nums[s]) s=mid+1;
            else e=mid;
        }
        return nums[s];
    }
};