class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int totalSum=0;
        bool ans = false;
        
        for(int i : arr){

            totalSum += i;


        }

        if(totalSum%3!=0){
            return false;
        }

        int target = totalSum/3;


        int curSum = 0;
        int count = 0;

        for(int i = 0;i<arr.size();i++){

            curSum+=arr[i];

            if(curSum==target){
                curSum=0;
                count++;
            }

            if(count>=3 && i==arr.size()-1){
                ans = true;
            }

        }

        return ans;
        
    }
};