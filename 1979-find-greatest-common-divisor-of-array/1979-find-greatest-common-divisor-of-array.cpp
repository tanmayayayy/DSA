class Solution {
public:
    int findGCD(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int smallest = nums[0];
        int largest = nums[nums.size()-1];

        if(largest%smallest==0){
            return smallest;
        }
        else{
            int ans = 0;
            for(int i = 1;i<=smallest;i++){

                if(smallest%i==0 && largest % i ==0){
                    ans = max(ans,i);

                }
            }
            return ans;
        }
        return -1;
        
    }
};