/*
Problem : 27. Remove element from an array

Platform : LeetCode

Pattern : Two Pointers

Time Complexity : O(n)

Space Complexity : O(1)

Status : Accepted

Key Idea
---------
- i = next position where a valid element should be placed. (mtlb this will eventually point to the val and then we will replace its value with the j)
- j = explorer that traverses the array.


- If nums[j] != val:
      copy nums[j] to nums[i]
      increment i
- Return i (count of valid elements).


My THOUGHTS:
this question basically teaches us that how can we do remove element form an array ... if we are supposed to return the array after remvoing the elements we can simply do nums.resize(i) so that it will return the only part which we need 
;; in this problem we return i because the first element can be the val itself

*/



class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0;
        for(int j=0; j<n; j++){
           if(nums[j]!= val){
            nums[i] = nums[j];
            i++;
           }
          
        }
           return i;
    }
};
