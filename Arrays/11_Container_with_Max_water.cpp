



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
