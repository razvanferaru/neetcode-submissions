class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> um;
        for(const auto& x : strs){
            string s = x;
            sort(s.begin(), s.end());
            um[s].push_back(x);
        }
        vector<vector<string>> res;
        for(const auto& x : um)
            res.push_back(x.second);
        return res;
    }
};
