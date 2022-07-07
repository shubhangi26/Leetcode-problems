class Solution {
public:
void combination(int ind,int target,vector<int>&arr,vector<vector<int>> &ans,vector<int> &subset){
     if(ind==arr.size()){
         if(target==0){
           ans.push_back(subset)  ;
         }
         return;
     }
        //pick
       if (arr[ind]<=target) {
      subset.push_back(arr[ind]);     
      combination(ind,target-arr[ind],arr,ans,subset);
      subset.pop_back();
    }
        //not pick
      combination(ind+1,target,arr,ans,subset);  
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>> ans;
       vector<int> subset;
        combination(0,target,candidates,ans,subset);
       return ans;
    }
};