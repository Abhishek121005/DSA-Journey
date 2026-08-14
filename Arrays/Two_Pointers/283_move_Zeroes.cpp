/*
Problem : 283. Move zeroes

Platform : LeetCode

Pattern : Two Pointers

Time Complexity : O(n)

Space Complexity : O(1)

Status : Accepted

Key Idea
---------
- i =  points to the index where the non-zero element should be placed
- j = traverse to find the non-zero element


- If nums[j]==0 continue;
else 
swap(nums[i], nums[j]);
i++;



My THOUGHTS:
this question just tells us to move zeroes to end unlike the previous question usme hame farak nahi pad rah tha ki 
ham jis index ko change kar rahe h wo matter like hame element remove karni h to ham a[i] == a[j] karsakte h but 
isme hame zeroes last me rakhne h islie swap() ka use kara h and bas kuch nahi h i ka kam h ki jo non zero aega use
kaha rakhna h and j use find karega 


*/


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        for(int j = 0; j<n; j++){
            if(nums[j] == 0) continue;

            else{
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};
