
/*
Problem : 11. Container with most water

Platform : LeetCode

Pattern : Two Pointers

Time Complexity : O(n)

Space Complexity : O(1)

Status : Accepted

Key Idea
---------
i = moves from first index

j =  point to the last index


My THOUGHTS:

since we have to find the maximum water we need to Calculate the area of the container...
so in order to calculate the area we have to find the height and width of the container..
the height we will consider will  be the minimum of height[i], height[j] because thats the height upto which
water will be present above it it overflows.
the width will be calculated by substracting the index of the two pointer ie; j-i .
then area will be calculated as height * width
 maxi = max(maxi, Area);
 
 *** here is a catch suppose the condition is  height[i]< height[j] so we know that the width will decrease but
 we need to move the i pointer forward to check if there exist any large container
 but the point is suppose if both height becomes equal *** height[i] == height[j] ***
 and in such case we can move both the pointer OR
 we can also move any of the one pointer which we did in our case 
 

then the max area will be returned;


*/



class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        // int maxi = 0; 
        // remeber area is multiplication so can be so large
        long long maxi = 0;

        while(i<j){
            if(height[i]< height[j]){
            int ht = height[i];
              int  wt = (j-i);

            long long Area = 1LL * ht * wt;
                // int Area = (ht * wt);
             maxi = max(maxi, Area);
                i++;
            }
            else{
                int ht = height[j];
              int  wt = (j-i);

                //  Area = (ht * wt);
                 long long Area = 1LL * ht * wt;

                maxi = max(maxi, Area);
            j--;
            }

        }
        return maxi;
    }
};
