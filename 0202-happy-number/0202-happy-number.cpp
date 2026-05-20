class Solution {
public:


    int solve(int n){



        int sum = 0;

        while(n > 0){

            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;


    }

    bool isHappy(int n) {

        unordered_map<int,int>mp;
        mp[n]++;

        while(true){

            int s = solve(n);

            if(s==1)
            return true;

            mp[s]++;
            if(mp[s]>1){
                return false;
                
            }
            n=s;
        }
        




        
    }
};