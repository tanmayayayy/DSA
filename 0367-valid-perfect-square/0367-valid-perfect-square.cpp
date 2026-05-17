class Solution {
public:
    bool isPerfectSquare(int n) {

        if(n==1) return true;

        long long l = 1;
        long long r = n/2;

        while(l <= r){

            long long mid = l + (r-l)/2;
            long long square = mid * mid;

            if(square == n){
                return true;
            }

            else if(square > n){
                r = mid - 1;
            }

            else{
                l = mid + 1;
            }
        }

        return false;
    }
};