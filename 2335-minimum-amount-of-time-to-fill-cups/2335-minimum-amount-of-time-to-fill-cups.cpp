class Solution {
public:
    int fillCups(vector<int>& amount) {

        sort(amount.begin(),amount.end());
        int c = 0;


        while(amount[amount.size()-1]>0){

            if(amount[1] > 0 && amount[2]>0){

                amount[amount.size()-1]--;
                amount[amount.size()-2]--;

                c++;
                // if(amount[0]>amount[1]){
                //     swap(amount[0],amount[1]);
                    
                // }

                // if(amount[1]>amount[2]){
                //     swap(amount[1],amount[2]);
                // }

                sort(amount.begin(),amount.end());

            }
            else{
                c+= amount[2] ;
                amount[2] = 0;
            }

           

        }
        return c;
        
    }
};