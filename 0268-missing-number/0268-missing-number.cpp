class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        vector<int> arr;
        
        
        for (int x : nums) {
            arr.push_back(x);
        }

        
        for (int i = 0; i <= n; i++) {
            arr.push_back(i);
        }

        
        int ans = 0;
        for (int x : arr) {
            ans ^= x;
        }

        return ans;
    }
};