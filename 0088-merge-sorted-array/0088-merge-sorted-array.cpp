class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p = 0;
        int q = 0;

        vector<int> ans;

        while(p < m && q < n){
            if(nums1[p]<nums2[q]){
                ans.push_back(nums1[p]);
                p++;
            }

            else if(nums1[p]==nums2[q]){
                ans.push_back(nums1[p]);
                ans.push_back(nums2[q]);
                p++;
                q++;

            }

            else if(nums1[p]>nums2[q]){
                ans.push_back(nums2[q]);
                q++;
            }

            else{
                // nothing here :)
            }
        }

        
        if(p==m){
            for(int i = q;i<n;i++){
                ans.push_back(nums2[i]);
            }
        }

        
        else if(q==n){
            for(int i = p;i<m;i++){
                ans.push_back(nums1[i]);
            }
        }

        for(int i = 0;i<nums1.size();i++){
            nums1[i]=ans[i];
        }
    }
};