/*
My thoughts : 
 this question is based on prefix sum and map
 is question me sab kuch same h like previous question 
 just you need to understand the pattern abhi 
1>>> ab dekh jo 560 h usme hamne subarray ka sum nikala and then usko map m store kara and check kara k se,,
 (sum ko store kar rahe the) map me and check kar rahe the 

 
2>>>> and wo 525 contiguous array wale me hame just balance se khelna tha thats it and map me values store karni thi,,
(Balance ko store kar rahe the) map me


3>>>>> similarly is question me hame store karna h subarray  ko jo k se divisble ho that is simple ohkk
just remember isme ham remainder se khel rahe h 
(remainder ko map me store kar rahe h)

 //  int remainder = pSum % k; ***** below one should be used 
     int remainder = ((pSum % k) + k) % k; //For handling negatives learn it

         

and then ham check kar rahe h ki remainder h wo map m pehle exists karta h ya nahi

agar karta h to uski frequency add kar rahe h counter me  ie:   

         if(mp.find(remainder)!= mp.end()){
            counter += mp[remainder];
         }
         
warna usko map me add kar rahe h 

 mp[remainder]++;

*/


class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int pSum = 0;
        int counter = 0;
        
         unordered_map<int, int>  mp;
           mp[0] = 1;

        for(int i = 0; i<nums.size(); i++){
            pSum += nums[i];

        //  int remainder = pSum % k; ***** below one should be used 
         int remainder = ((pSum % k) + k) % k; //For handling negatives learn it 
         
         if(mp.find(remainder)!= mp.end()){
            counter += mp[remainder];
         }
         
         
            mp[remainder]++;
         
        }
        return counter;
    }
};
