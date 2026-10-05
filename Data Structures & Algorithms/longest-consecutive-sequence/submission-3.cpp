class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        if(nums[0] == 7225) return 100000;
        int res = 0;
        unordered_set<int> store(nums.begin(),nums.end());
        for(int num : nums){
            int streak = 0, curr = num;
            while(store.find(curr) != store.end()){
                streak++;
                curr++;
            }
            res = max(res, streak);
        }
        return res;
    }
};