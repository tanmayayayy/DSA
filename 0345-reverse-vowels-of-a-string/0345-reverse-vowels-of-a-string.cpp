class Solution {
public:

    bool isVowel(char c){

        c = tolower(c);

        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }

    string reverseVowels(string s) {

        int p = 0;
        int q = s.size()-1;

        while(p < q){

            while(p < q && !isVowel(s[p])){
                p++;
            }

            while(p < q && !isVowel(s[q])){
                q--;
            }

            swap(s[p], s[q]);

            p++;
            q--;
        }

        return s;
    }
};