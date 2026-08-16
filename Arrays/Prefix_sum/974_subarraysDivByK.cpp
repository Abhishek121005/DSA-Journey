/*


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
