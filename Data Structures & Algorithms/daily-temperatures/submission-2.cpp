class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        const int n = temp.size();
        stack<pair<int,int>>st;
        vector<int>res(n);
        for(int i=0; i<n; ++i){
            int t = temp[i];
            while(!st.empty() && t > st.top().first){
                auto x = st.top();
                res[x.second] = i-x.second;
                st.pop();
            }
            st.push({t,i});
        }
        return res;
    }
};