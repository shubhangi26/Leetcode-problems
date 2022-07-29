class Solution {
public:
    bool isIsomorphic(string s, string t) {
      vector<int> m1(128,-1);
      vector<int> m2(128,-1);
        for (int i = 0; i < s.size(); i++) {
            if (m1[s[i]] != m2[t[i]]) return false;
            m1[s[i]] = i;
            m2[t[i]] = i;
        }
        return true;  
    }
};