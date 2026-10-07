class Solution {
public:
    int maxArea(vector<int>& nums) {
        int left=0, right=nums.size()-1;
        int max_volume = 0;
        while(left < right){
            int curent_volume = min(nums[left], nums[right]) * (right - left);
            if(curent_volume > max_volume) max_volume = curent_volume;
            if(nums[left] < nums[right]) left++;
            else right--;
        }
        return max_volume;
    }
};
