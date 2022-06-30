class Solution {
public:
    int minMoves2(vector<int>& nums) {
      int n = nums.size();
        //approach 1 :sort , find median ,make every element equal to median 
        //approach 2 :sort , min+x ,max-y, we need to calculate x+y which are the steps
        sort (nums.begin(),nums.end()); 
        int res=0;
        int i=0;
        int j =n-1;
        while(i<j){  //at middle there is median there they will be equal
            res+=abs(nums[j--]-nums[i++]);
        }
            
        return res;
        
    }
};