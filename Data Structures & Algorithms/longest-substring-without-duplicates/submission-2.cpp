class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        const int n = s.size();
        if(n < 2) return n;
        unordered_map<char, int>um; // caracter / ultima pozitie
        int left = 0, right = 1, max_val = 1, cur_size = 0;
        um[s[0]] = 0;
        while(right < n){
            if(um.find(s[right]) != um.end()){
                left = max(left,um[s[right]]+1);
            }
            max_val = max(max_val, right - left + 1);
            um[s[right]] = right;
            right++;
        }
        return max_val;
    }
};
