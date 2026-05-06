class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        unordered_map<char,int>mp;
        int count=0;

        for(char c:jewels){
            mp[c]++;
        }

        for(int i = 0;i<stones.size();i++){
            if(mp[stones[i]]==1){
                count++;
            }
        }

        return count;
        
    }
};