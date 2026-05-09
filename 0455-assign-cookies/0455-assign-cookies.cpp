class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int p = 0;
        int q = 0;
        int count = 0;

        sort(g.begin(),g.end());
        sort(s.begin(),s.end());


        while(p < g.size() && q<s.size() ){

            if(s[q]>=g[p]){
                p++;
                q++;
                count++;

            }

            else{
                q++;
            }
        }

        return count;
        
    }
};