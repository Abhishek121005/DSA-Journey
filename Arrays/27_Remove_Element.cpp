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
