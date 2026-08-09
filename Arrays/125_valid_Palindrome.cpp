/*
Problem : 125. Valid palindrome

Platform : LeetCode

Pattern : Two Pointers

Time Complexity : O(n)

Space Complexity : O(1)

Status : Accepted

Key Idea
---------
i = moves from forward 

j =  point to the last elem

NEw:::::: isalnum() is used to check all the alphaNumeric values (A-Z, a-z, 0-9).
Used to convert the string to lowerCase tolower()



My THOUGHTS:
one pointer from start another from last we just check by ignoring the special character 
for every indices the pairs we check if they are equal and last return true  **tolower(s[left]) != tolower(s[right])

*/


class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
         

        while(left<right){
         if(!isalnum(s[left])){
            left++;
            continue;
         } 
         else if(!isalnum(s[right])){
            right--;
            continue;
         }
         else if(tolower(s[left]) != tolower(s[right])) {
            return false;
         }
         left++; 
         right--;
        }
        return true;
    }
};
