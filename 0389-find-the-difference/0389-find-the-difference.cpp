class Solution {
public:
    char findTheDifference(string s, string t) {

        unordered_map<char, int> mp;

        for(char c : s){
            mp[c]++;
        }

        for(char c : t){
            mp[c]--;
        }

        for(auto pair : mp){
            if(pair.second == -1){
                return pair.first;
            }
        }

        return ' ';
    }
};