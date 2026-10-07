class Solution {
public:
    int maxProfit(vector<int>& prices) {
        const int n = prices.size();
        if(n < 2) return 0;
        int left = 0, right = 1, max_profit = 0;
        while(right < n){
            int curent_profit = prices[right] - prices[left];
            if(left < right){
                max_profit = max(max_profit, curent_profit);
                if(prices[left] > prices[right]){
                    left = right;
                    right = left+1;
                }
                else right++;
            }
            else{
                left = right;
                right = left+1;
            }
        }
        return max_profit;
    }
};
