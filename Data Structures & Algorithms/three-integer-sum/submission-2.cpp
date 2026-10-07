class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        const int n = nums.size();
        set<vector<int>> s;
        sort(nums.begin(), nums.end());
        for(int k=0; k<n-2; ++k){
            int x = nums[k];
            int sum = 0;
            int left = k+1, right = n-1;
            while(left < right){
                sum = x + nums[left] + nums[right];
                if(sum == 0){
                    s.insert({x, nums[left], nums[right]});
                    left++;
                }
                else if(sum < 0) left++;
                else right--;
            }
        }
        vector<vector<int>> result;
        for(auto& elem : s)
            result.push_back(elem);
        return result;
    }
};
// -4 -1 -1 0 1 2