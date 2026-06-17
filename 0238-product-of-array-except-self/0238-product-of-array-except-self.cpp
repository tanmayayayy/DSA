class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefix(n);
        vector<int> postfix(n);
        vector<int> ans(n);

        prefix[0]=1;
        postfix[nums.size()-1]=1;

        for(int i = 1;i<nums.size();i++){

            prefix[i] = nums[i-1]*prefix[i-1];




        }

        for(int i = nums.size()-2;i>=0;i--){

            postfix[i] = postfix[i+1]*nums[i+1];
        }


        for(int i = 0 ; i<nums.size();i++){

            ans[i] = postfix[i]*prefix[i];
        }

        return ans;


        
    }
};