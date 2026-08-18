
/*
My Thoughts : ::: :: ::

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
