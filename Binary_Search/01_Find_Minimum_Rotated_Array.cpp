
/*
Problem : 153. Minimun in a rotated sorted array

Platform : LeetCode

Pattern : Binary Search

Time Complexity : O(logn)

Space Complexity : O(1)

Status : Accepted

Key Idea
---------


so we just need to do the classic bs.
but we just need to compare the ***** high ***** value in order to find the half which we need to eliminate
since the mid can also be the minimum we cant just ignore it by doing high = mid-1 so in
 order to preserve the ans we take ********8 high = mid; ************

 My THOUGHTS:
 & Just remeber ki agar kisi question me minimum max, and array is sorted kinda aya to we will think immediately 
 of BS and han abhishek ye mid ka concept is important , learn it by dry run dry run and dry run...
 

*/



class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
  
        while(low<high){
            int mid = (high+low)/2;
            if(nums[mid] > nums[high]){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return nums[low];
        
    }
};
