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
            if (mp.find(prefixSum - k) != mp.end()) {
                count += mp[prefixSum - k];
            }

            // Record current prefixSum
            mp[prefixSum]++;
        }
        return count;
    }
};
