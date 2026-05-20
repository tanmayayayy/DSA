class Solution {
public:
    void reverseString(vector<char>& s) {
        int p = 0;
        int q = s.size()-1;

        for(int i = 0 ; i<s.size()/2;i++){

            swap(s[p],s[q]);

            p++;
            q--;


        }
        
    }
};