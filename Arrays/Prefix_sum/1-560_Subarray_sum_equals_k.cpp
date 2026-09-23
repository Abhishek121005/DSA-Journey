/*
Leetcode: 560
pattern :: Prefix sum with hash Map



in this question we are starting with Prefix sum 
:: the concept is simple we are using a Currentsum for storing the sum
then we are doing the PreviousSum  = CurrentSum - k
 then we will check if the required element is in the map 
 then we will increase the frequency;

 remeber the prefix sum  is used to find the sum 
 map is used to find the required element  and for frequency count;
*/

// Question:: 
// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.

 

// Example 1:

// Input: nums = [1,1,1], k = 2
// Output: 2
// Example 2:

// Input: nums = [1,2,3], k = 3
// Output: 2
 

// Constraints:

// 1 <= nums.length <= 2 * 104
// -1000 <= nums[i] <= 1000
// -107 <= k <= 107


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp; 
        mp[0] = 1;  // base case: sum = 0 occurs once

        int count = 0, prefixSum = 0;
        for (int num : nums) {
            prefixSum += num;

            // Check if (prefixSum - k) has occurred before
         // we can also do by taking** reqSum = prefixSum - k **but it is eventually the same 
        // thing so we directly  putting it;
         
            if (mp.find(prefixSum - k) != mp.end()) {
                count += mp[prefixSum - k];
            }

            // Record current prefixSum
            mp[prefixSum]++;
        }
        return count;
    }
};
