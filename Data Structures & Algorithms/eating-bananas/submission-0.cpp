class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        const int n = piles.size();
        int max_val = *max_element(piles.begin(), piles.end());
        int start = 1, end = max_val, mid = -1, best = -1;
        while(start <= end){
            mid = (start + end) / 2;
            long long int cur_h = 0, index = 0;
            while(cur_h <= h && index < n){
                cur_h += piles[index] / mid + (piles[index] % mid > 0 ? 1 : 0);
                index++;
            }
            if(cur_h <= h){
                best = mid;
                end = mid - 1;
            }
            else start = mid + 1;
        }
        return best;
    }
};
