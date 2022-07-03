class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
      int left = INT_MAX, mid = INT_MAX;
    for (int num : nums) {
        if (num>mid) return true;
        if (num<left) left = num;
        if (num>left&&num<mid) mid = num;
    }
    return false;  
    }
};