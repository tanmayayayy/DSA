class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {

        unordered_map<int,int>mp;
        int ans = -1;

        for(int i:nums){
            if(i%2==0){
                mp[i]++;
            }
        }

        for(int i = 0;i<nums.size();i++){
            if(mp[nums[i]]==1){
                ans= nums[i];
                break;
            }
        }

        return ans;
        
    }
};