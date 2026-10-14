class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        const int n = nums.size();
        vector<int> result(n-k+1);
        priority_queue<pair<int,int>> maxHeap;
        for(int i=0; i<k; ++i){
            maxHeap.push({nums[i],i});
        }
        int index = 0;
        result[index] = maxHeap.top().first;
        index++;
        int l;
        for(int r=k; r<n; ++r){
            l = r-k+1;
            maxHeap.push({nums[r],r});
            while(maxHeap.top().second < l) maxHeap.pop();
            result[index] = maxHeap.top().first;
            index++;
        }
        return result;
    }
};
