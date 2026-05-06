class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int,int> mp;
        unordered_map<int,int> np;
        set<int>s;

        for(int i:arr){
            mp[i]++;
        }

        for(auto it:mp){
            s.insert(it.second);
        }

        if(s.size()==mp.size()){
            return true;
        }

        return false;


        
    }
};