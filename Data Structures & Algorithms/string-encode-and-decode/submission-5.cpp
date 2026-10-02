class Solution {
public:
    string encode(vector<string>& strs) {
        string result = "";
        for (const string& s : strs)
            result += to_string(s.size()) + "#" + s;
        return result;
    }

    int lenght(string& s, int index = 0){
        int len = stoi(s.substr(index, s.find("#",index)-index-1));
        cout << len << '\n';
        return len;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int start = 0;
        while(start < s.size()){
            int diez_pos = s.find("#",start);
            int cur_len = stoi(s.substr(start, diez_pos - start));
            string word = s.substr(diez_pos + 1, cur_len);
            result.push_back(word);
            start = diez_pos + 1 + cur_len;
        }
        return result;
    }
};
