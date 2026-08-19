
/*
My Thoughts : ::: :: ::

Just a simple implementation of Prefix Sum with map;

mp[0] = -1;
why this because we need to calculate the length ***

then just calc the PrefixSum as pSum 
then calc remainder.

if(mp.find(remainder) != mp.end()){
            int len = i - mp[remainder];

Then we will just check the remainder value if it already exist in the map 
then we will just calc the len of the indexes by doing  : int len = i - mp[remainder];

since we are told to check if the len is greater than or equal to  2 : 

****  mp[remainder] = i; This line is just used to add the value of remainder inside the map at the index i;


if(len >= 2){ return true;}
        }
        else{
            mp[remainder] = i;
        }
        }
        return false;



*/

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;
         mp[0] = -1;
         int Psum = 0;

        for(int i = 0; i<nums.size();i++){
             Psum += nums[i];

            int remainder = (Psum % k);
            // int remainder = ((Psum % k) + k) % k; Remember to use this abhishek

        if(mp.find(remainder) != mp.end()){
            int len = i - mp[remainder];

        if(len >= 2){ return true;}
        }
        else{
            mp[remainder] = i;
        }
        }
        return false;
    }
};
