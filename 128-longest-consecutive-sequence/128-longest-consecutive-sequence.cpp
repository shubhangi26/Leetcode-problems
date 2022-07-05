class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      unordered_set<int>s (nums.begin(),nums.end()) ;
        int maxseq = 0;

        for( auto num : s){
            if(!s.count(num-1)){
                int currnum = num;
                int currseq = 1;
                
                while (s.count(currnum+1)){
                   currnum++;
                   currseq++; 
                }
              maxseq = max(maxseq,currseq);  
            }
        }
        return maxseq;
    }
};