class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        vector<int>v;

        unordered_map<int,int>mp;

        for(int i : nums){
            mp[i]++;
        }

        v.push_back(nums[0]);

        for(int i = 0;i<nums.size();i++){

            if(mp[nums[i]]!=mp[nums[0]]){
                v.push_back(nums[i]);
                break;
            }


            
        }

        if(v.size()==2){
            return v;
        }

        else{
            return {-1,-1};
        }
        
    }
};