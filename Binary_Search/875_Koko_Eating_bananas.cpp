/* 
My Thoughts::::
in this particular question we need to find the minimum bananas koko should eat so that 
she can eat the whole piles of banana in the given time Hours.
in this question we will be applying bs on answer ie; for this 
we have to find the range to range kya hoti h 
In this question samaj minimum time kese nikalega tu jab koko jo h wo max banana khaegi to ham
check karenge ki konsa pile max h then wo limit hogi
and start karegi 1 se kyuki that is the minimum time jo lagega hi
to range ho jaegi   *** 1 to max(piles)  ******

use bad we will check mid and then ham mid ko check karenge ki piles khane me kitna time lag raha h 
if jo time h wo given time se kam h mtlb mid jyada h ya fir bol sakte h ki mid ki value ko kam karo then 
koko kam banana kam khaegi taki time match ho sake and koko ko dhire khana psnd h so high = mid;;
hoga and else agar jo time h wo given time se jyada aya mtlb we have to increase the mid taki koko jaldi kha sake 
in the given time to ham low = mid+1; karenge 

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
