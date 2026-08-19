
/* 
My thoughts::: :: ::: :
question is similar to koko but i said similar so yaad rakhna koko me we have to find the 
speed at which koko should eat or we can the the no of bananas koko can eat 
but in this question we need to find the capacity of packages

so the range in this is unlike to koko mtlb in koko hamne kya kara tha na we where given the piles of banana
and we where provided by the time in which we should eat them so hamne range kese calc kari thi 
from 1 to the max time jis pile p lag raha...
But in this range ke lie hame sochna h kya sochna h 
kyuki ye range me hame capacity nikalni h and hame weight de rakhe h to 
we will start from the max weight ie: low = max_weight because jo capicty h wo weight se kam nahi ho sakti 
mtlb suppose max elem is 10 to 10 se niche lenge to it doesnt make sense 
and upper bound hoga uska sum 
ie : to range is ( max_element to Sum)

then comes classis bs 

**********************Catch point :::   int tDay = 1;
why are we doing this because you should understand ki jab ham start karenge we need to take the day 
as 1 warna we will skip the totalDays jo lagenge just whenever you come across this question 
just remember this ki you gotta start from 1st day kyuki 1 day should be the start and then when you 
compare for the first block then you can increase and find the totalDays required;




then ham ek loop lagayenge to calc totalSum jo chal raha h ie: wSum = ongoing sum us index tak

after that ham check karenge ki jo hamara wSum h wo hamare mid se compare karenge 

then agar wo (wSum <= mid) chota h mid se to ham loop forward move karenge taki wSum ki value bade 

then after that jab else condition lagegi to ham
                        tDay++;
                    wSum = weights[i];

******* Catch point:::::  wSum = weights[i];     ham weight[i] assign kar rahe agar nahi kara
suppose you did wSum = 0 ,  then kya hogana ki apki jo current index ki value h wo skip ho jayegi and wSum 
calculation me indexes skip ho jayenge 

then we will just calc the totalDays required as tDay jo hame ship karne me time lagega 

 if(tDay <= days){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }                 

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
