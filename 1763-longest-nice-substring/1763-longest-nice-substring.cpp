class Solution {
public:
    bool isNice(string s) {
        unordered_set<char> st(s.begin(), s.end());
        for (char c : s) {
            if (st.count(toupper(c)) == 0 || st.count(tolower(c)) == 0)
                return false;
        }
        return true;
    }

    string longestNiceSubstring(string s) {
        int n = s.size();
        string niceString = "";

        for (int i = 0; i < n; i++) {
            for (int j = i + 2; j <= n; j++) {
                string sub = s.substr(i, j - i);
                if (isNice(sub) && sub.size() > niceString.size()) {
                    niceString = sub;
                }
            }
        }

        return niceString;
    }
};