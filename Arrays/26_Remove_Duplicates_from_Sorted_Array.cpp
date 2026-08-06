/*
Problem : 26. Remove Duplicates from Sorted Array

Platform : LeetCode

Pattern : Two Pointers

Time Complexity : O(n)

Space Complexity : O(1)

Status : Accepted

Key Idea
---------
i = Last unique element

j = Explorer

Whenever nums[i] != nums[j],
copy nums[j] to nums[i+1].

My THOUGHTS:
this question basically teaches us that how can we do remove element form an array ... if we are supposed to return the array after remvoing the elements we can simply do nums.resize(i) so that it will return the only part which we need 
;; in this problem we return i because the first element can be the val itself

*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   int removeDuplicates(vector<int>& nums){
    int n = nums.size();
    int i = 0;
    
    for(int j=1; j<n; j++){
        if(nums[i]!=nums[j]){
            nums[i+1] = nums[j];
            i++;
            
        }
       
    
    }
        return i+1;
        
        }
    

};
