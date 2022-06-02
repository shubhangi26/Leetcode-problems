class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int minL = INT_MAX;
      int profit = 0;
      int maxp = INT_MIN;
     for (auto i : prices){
         minL = min(i,minL);
         profit = i - minL;
         maxp = max(maxp,profit);
     }
        return maxp;
    }
};