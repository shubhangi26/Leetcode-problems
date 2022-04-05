class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) {
        vector<int> ans ;
       
        
         if (a.size()==0){
            ans.push_back(-1);
            ans.push_back(-1); 
             return ans;
        }
        
       
        int indl= lower_bound(a.begin(),a.end(),target)-a.begin();
        int indu = upper_bound(a.begin(),a.end(),target)-a.begin();
        indu--;
         
        
       
        if (indl >=0 && indl<a.size() && a[indl]==target)
            ans.push_back(indl);
        else
            ans.push_back(-1);
        if (indu>=0 && indu<=a.size() && a[indu]==target)
            ans.push_back(indu);
          else
            ans.push_back(-1);
        return ans;
        
    }
};