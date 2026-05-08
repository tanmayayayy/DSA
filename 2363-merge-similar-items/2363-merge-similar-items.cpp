class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {

        unordered_map<int,int>mp;
        vector<vector<int>> ans;

       for(auto row : items1){
        mp[row[0]] = row[1];
       }

        for(auto row : items2){
        mp[row[0]] += row[1];
       }

        for(auto it : mp){

            ans.push_back({it.first,it.second});

        }

        sort(ans.begin(),ans.end());
        return ans;


        
    }
};