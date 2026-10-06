class Solution {
public:
    bool wordIsPalindrome(const string& s){
        const int n = s.size();
        for(int i=0; i<n/2; ++i)
            if(s[i] != s[n-i-1]) return false;
        cout << s;
        return true;
    }

    bool isPalindrome(string s) {
        string word = "";
        for(int i=0; i<s.size(); ++i)
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
                word += tolower(s[i]);
        return wordIsPalindrome(word);
    }
};
