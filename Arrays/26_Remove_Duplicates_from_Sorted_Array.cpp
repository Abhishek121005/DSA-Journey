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
so in this we remove the duplicates and since this is a zero based indexing we need to return i+1 ;;; this question teaches us the concept of how to return a modified array ;;
since we are storing the first index ;

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
