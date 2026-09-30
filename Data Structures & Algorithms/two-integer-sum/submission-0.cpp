class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;
        um[nums[0]] = 0;
        for(int i=1; i<nums.size(); ++i){
            int x = target - nums[i];
            auto it = um.find(x);
            if(it != um.end()) return {it->second, i};
            um[nums[i]] = i;
        }
        return {-1,-1};
    }
};
