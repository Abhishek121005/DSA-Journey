
/*
Leetcode: 523
pattern :: Prefix sum with hash Map

My Thoughts :

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

// Question:: 
// Given an integer array nums and an integer k, return true if nums has a good subarray or false otherwise.

// A good subarray is a subarray where:

// its length is at least two, and
// the sum of the elements of the subarray is a multiple of k.
// Note that:

// A subarray is a contiguous part of the array.
// An integer x is a multiple of k if there exists an integer n such that x = n * k. 0 is always a multiple of k.
 

// Example 1:

// Input: nums = [23,2,4,6,7], k = 6
// Output: true
// Explanation: [2, 4] is a continuous subarray of size 2 whose elements sum up to 6.
// Example 2:

// Input: nums = [23,2,6,4,7], k = 6
// Output: true
// Explanation: [23, 2, 6, 4, 7] is an continuous subarray of size 5 whose elements sum up to 42.
// 42 is a multiple of 6 because 42 = 7 * 6 and 7 is an integer.
// Example 3:

// Input: nums = [23,2,6,4,7], k = 13
// Output: false
 

// Constraints:

// 1 <= nums.length <= 105
// 0 <= nums[i] <= 109
// 0 <= sum(nums[i]) <= 231 - 1
// 1 <= k <= 231 - 1



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
