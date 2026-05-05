class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<int> ans;

        int max = nums[nums.size()-1];
        int min = nums[0];

        for(int i = min;i<=max;i++){

            auto it = find(nums.begin(), nums.end(), i);

            if(it==nums.end()){
                ans.push_back(i);
            }


           
    
        }
        return ans;
        
    }
};