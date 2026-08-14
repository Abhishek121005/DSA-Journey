/*
Problem : 121. : Best Time to Buy and sell

Platform : LeetCode

Pattern : Two Pointers

Time Complexity : O(n)

Space Complexity : O(1)

Status : Accepted

Key Idea
---------
i = the i will be pointing to the first index and then when we find a less prices of j we update i = j

j = j traverse through the array 

Whenever profit = a[j] - a[i],
maxi = max(profit, maxi) .
just check the condition if a[j]<a[i] to i ko j ki value assign kardenge becuase its small and will be best to
find max profit



My THOUGHTS:
in this problem we just take i and j ,, pointer starting me i 0th index ko point karta h and j ko ham traverse karte h
profit is calc by profit = a[j] - a[i] and maximum profit is maxi = max(profit, maxi)
** but the catch is ki kyuki hame i ki value choti chaiye taki profit maximum ho to ham 
ek if se check karte h ki   a[j]<a[i]  esa huva to ham i = j ie i ko j ki value assign karte h taki 
profit maximum nikle 
;

*/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i= 0;
        int maxi = 0;

        for(int j = 1; j<n; j++){
          int  profit =  prices[j] - prices[i];
          maxi = max(profit, maxi);

          if(prices[j] < prices[i]){
            i = j;
          }
          
          
        }
        return maxi;
    }
};
