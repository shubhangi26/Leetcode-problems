class Solution {
public:
    int minMoves2(vector<int>& nums) {
      int n = nums.size();
        //sort , find median ,make every element equal to median 
        sort (nums.begin(),nums.end()); 
        int res=0;
        for(auto i:nums)
            res+=abs(i-nums[n/2]);
        return res;
        
    }
};