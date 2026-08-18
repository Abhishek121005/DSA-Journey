
/* 
My thoughts::: :: ::: :

*/

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxSum = 0;
        
            for(int i = 0; i<weights.size(); i++){
                maxSum += weights[i];
            }
        
        
        // int low = 1;
        int low = *max_element(weights.begin(), weights.end());
        int high = maxSum;

        while(low<high){
            int mid = (low+high)/2;
            int wSum = 0;
            int tDay = 1;

            for(int i = 0; i< weights.size(); i++){
                wSum += weights[i];

                if(wSum <= mid){

                    continue;
                }
                else{
                    tDay++;
                    wSum = weights[i];
                }
            }
            if(tDay <= days){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};
