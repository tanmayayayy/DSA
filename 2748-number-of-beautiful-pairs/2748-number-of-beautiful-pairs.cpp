class Solution {
public:


    int firstDigit(int n){

        while(n >= 10){
            n /= 10;
        }

        return n;
    }

    int countBeautifulPairs(vector<int>& nums) {

        int count = 0;

        for(int i = 0; i < nums.size(); i++){

            for(int j = i + 1; j < nums.size(); j++){

                int first = firstDigit(nums[i]);

                int last = nums[j] % 10;

                if(__gcd(first, last) == 1){
                    count++;
                }
            }
        }

        return count;
    }
};