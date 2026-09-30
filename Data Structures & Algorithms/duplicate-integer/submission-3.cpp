class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        for(int elem : nums){
            auto it = s.find(elem);
            if(it != s.end()) return true;
            s.insert(elem);
        }
        return false;
    }
};