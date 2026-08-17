/* 


*/


class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = INT_MIN;
        for(int i = 0; i<piles.size(); i++){
            maxi = max(maxi, piles[i]);
        }

        int high = maxi;
        int low = 1;

        while(low < high){
            int mid = (low+high)/2;

        int totalhours = 0;
            
    for(int i = 0; i < piles.size(); i++) {
        // calculate hours for this pile
            int hours = ceil((double)piles[i] / mid);

        // add to totalhours
             totalhours += hours;
    }

        

            if(totalhours <= h){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};
