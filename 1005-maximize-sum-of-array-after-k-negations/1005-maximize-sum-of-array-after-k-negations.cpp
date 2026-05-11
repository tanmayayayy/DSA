class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){




            if(nums[i]<0){

                if(k>0){
                    nums[i]=-nums[i];
                    k--;

                }

            }

            else if(nums[i]==0){
                k=0;
            }

            
            




        }


        sort(nums.begin(),nums.end());

        if(k>0){
            nums[0]=nums[0]*pow(-1,k);
            k=0;
        }

        int sum = 0;
        for(int i : nums){
            sum+=i;
        }

        return sum;
        
    }
};