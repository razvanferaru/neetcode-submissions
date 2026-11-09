class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        const int n = temp.size();
        vector<int> result(n, 0);
        stack<pair<int,int>> st;
        for(int i=0; i<n; ++i){
            int t = temp[i];
            while(!st.empty() && t > st.top().first){
                auto curr = st.top();
                result[curr.second] = i-curr.second;
                st.pop();
            }
            st.push({t,i});
        }
        return result;
    }
};