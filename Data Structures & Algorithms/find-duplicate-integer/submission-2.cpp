class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(const auto& num : nums){
            int index = abs(num) - 1;
            if(nums[index] < 0) return abs(num);
            nums[index] *= -1;
        }
        return -1;
    }
};
//distributia negativ binomiala, des la PS la examen ajuta mult
