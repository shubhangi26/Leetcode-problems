class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map;
        vector<int> result;
        for(auto i : nums1){
            map[i]++;
        }
        for(auto it : nums2){
            if (map[it] > 0){
                result.push_back(it); 
                map[it] = 0;
            }
             
            
        }
        return result;
    }
};