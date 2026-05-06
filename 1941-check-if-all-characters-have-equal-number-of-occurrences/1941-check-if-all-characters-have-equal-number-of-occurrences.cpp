class Solution {
public:
    bool areOccurrencesEqual(string s) {

        unordered_map<char,int> mp;
        set<int> st;


        for(char c:s){
            mp[c]++;
        }

        for(auto it:mp){
            st.insert(it.second);
        }

        if(st.size()==1){
            return true;
        }

        return false;


        
    }
};