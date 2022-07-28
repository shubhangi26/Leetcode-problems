class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int lsum = 0,rsum=0; 
    for (int i : nums) lsum+=i;
    for (int i = 0 ;i <nums.size();i++){
        lsum=lsum-nums[i];
        if(lsum==rsum) {
            return i;
            break;
        }
        rsum=rsum+nums[i];
    }
        return -1;
    }
};