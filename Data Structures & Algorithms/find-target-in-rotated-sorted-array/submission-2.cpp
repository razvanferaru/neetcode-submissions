class Solution {
public:
    int search(vector<int>& nums, int target) {
        const int n = nums.size();
        int start = 0, end = n-1, mid = -1;
        bool isLeft = true;
        if(target <= nums[n-1]) isLeft = false;
        while(start < end){
            mid = (start + end) / 2;
            if(nums[mid] == target) return mid;
            if(nums[mid] <= nums[n-1]){ // daca este in dreapta
                if(isLeft == false){
                    if(nums[mid] <= target) start = mid+1;
                    else end = mid;
                }
                else end = mid;
            }
            else{
                if(isLeft == true){
                    if(nums[mid] <= target) start = mid+1;
                    else end = mid;
                }
                else start = mid+1;
            }
        }
        return (nums[end] == target ? end : -1);
    }
};
