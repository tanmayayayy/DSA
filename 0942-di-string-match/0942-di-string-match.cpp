class Solution {
public:
    vector<int> diStringMatch(string s) {

        vector<int> v;
        vector<int> ans;

        for(int i = 0;i<=s.size();i++){
            v.push_back(i);
        }

        int p = 0;
        int q = v.size()-1;

        for(char c : s){
            if(c=='I'){
                ans.push_back(v[p]);
                p++;

            }
            else if(c=='D'){
                ans.push_back(v[q]);
                q--;
            }
        }

        ans.push_back(p);
        return ans;
        
    }
};