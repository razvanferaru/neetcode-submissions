class Solution {
public:
    int findMin(vector<int> &nums) {
        const int n = nums.size();
        int start = 0, end = n-1, mid = -1;
        while(start < end){
            mid = (start + end) / 2;
            if(nums[mid] < nums[n-1]){
                end = mid;
            }
            else start = mid+1;
        }
        return nums[end];
    }
};
