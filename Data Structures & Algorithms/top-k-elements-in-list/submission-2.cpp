class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        const int n = nums.size();
        for(int i=0; i<n; ++i) um[nums[i]]++;
        vector<pair<int,int>> res;
        for(const auto& p : um) res.push_back({p.first,p.second});
        sort(res.begin(),res.end(),[](const auto& x, const auto& y){return x.second > y.second;});
        vector<int> result;
        for(int i=0; i<k; ++i) result.push_back(res[i].first);
        return result;
    }
};
