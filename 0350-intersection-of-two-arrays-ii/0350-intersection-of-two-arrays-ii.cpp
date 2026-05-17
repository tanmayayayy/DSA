class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size();
        int m=nums2.size();
        vector<int> ans;

        if(n>=m){
            unordered_map<int,int>mp;

            for(int i : nums1){
                mp[i]++;
            }

            for(int i : nums2){
                if(mp[i]>0){
                    ans.push_back(i);
                    mp[i]--;
                }
            }
        }

        else{
            unordered_map<int,int>mp;

            for(int i : nums2){
                mp[i]++;
            }

            for(int i : nums1){
                if(mp[i]>0){
                    ans.push_back(i);
                    mp[i]--;
                }
            }

        }

        return ans;


        
    }
};