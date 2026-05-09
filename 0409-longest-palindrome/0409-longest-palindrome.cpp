class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map<char,int>mp;

        

        int count = 0;
        bool oddexists = false;

        for(char c : s){
            mp[c]++;
        }

        for(auto it : mp){
            if(it.second%2==0){

                count += it.second;

            }

            else{
                oddexists = true;
                count += it.second-1;
            }
        }

        if(oddexists){
            count++;
        }

        

        return count;




        
    }
};