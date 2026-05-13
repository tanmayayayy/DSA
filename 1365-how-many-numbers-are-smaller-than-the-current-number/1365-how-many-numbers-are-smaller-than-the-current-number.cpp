class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> nos(nums.begin(), nums.end());
        sort(nos.begin(), nos.end());

        int p = 0, q = 1;
        vector<int> ans;
        ans.push_back(0);

        for (int i = 1; i < nos.size(); i++) {
            if (nos[p] != nos[q]) {
                ans.push_back(q);   
            } else {
                ans.push_back(ans[p]); 
            }
            p++;
            q++;
        }

        unordered_map<int, int> mp;
        for (int i = 0; i < nos.size(); i++) {
            mp[nos[i]] = ans[i];
        }

        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            result.push_back(mp[nums[i]]);
        }

        return result;
    }
};