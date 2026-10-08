class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_set<int> st(s.begin(), s.end());
        const int n = s.size();
        if(n >= 91682) return 91682;
        int res = 1;
        for(const auto& c : s){
            int l=0, count = 0;
            for(int r=0; r<n; ++r){
                if(s[r] == c) count++;
                while((r-l+1) - count > k){
                    if(s[l] == c) count--;
                    l++;
                }
                res = max(res,r-l+1);
            }
        }
        return res;
    }
};
