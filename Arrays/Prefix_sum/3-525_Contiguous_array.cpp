/*
based on Prefix Sum
Overview: 
so in this question what we do that since we have to find the maximum length of the subArray such that
the no of 0's and 1's are same 
so what we do is that we do -1 when a zero is occured and +1 when 1 is occured so that we can calculate
 the Balance
 Balance is the addition we can say or the sum upto the CurrentIndex so what we do is we check
 we check for the balance means agar do positions p balance same araaha h to it implies
 ki unke bech ka relative sum = 0 ye yaad rakhna mtlb is simple ki agar suppose balance = 0 at index 2 and 
 again balance = 0 at index 6 to inke beche me jo bhi 0 and 1 aye honge unhone ek dusre ko cancel kara hoga
  and then relative sum = 0 huva tab hi to hamara balance same h
  and after that since we have to find the max length ham mp[0] = 1 nahi kar sakte kyuki hame length return karni h
  to usee consider nahi kar sakte islie ham mp[0] = -1 dete h taki usme add karke max length find kar sake;
  kyuki ye array sirf 0 and 1 ka h to hi ham 0 ko -1  allocate kar rahe h;

  and then pura prefix sum + hashMap ka concept h just yaad rakhna ki isme balance se khelna h 
  jese ham frequency se khelte h and      mp[0] = -1; this is imp condition kyuki nahi kara to
  length galat calc hogi.
  
*/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
     unordered_map<int, int> mp;
     int maxLen = 0;
     int balance = 0;
    
     mp[0] = -1;

     for(int i = 0; i < nums.size(); i++){
     if(nums[i] == 0){
        balance--;
     }
     if(nums[i] == 1){
        balance++;
     }
     
     if(mp.find(balance) != mp.end()){
           int  length = i - mp[balance];
           maxLen = max(maxLen, length);
     } 
     else{
        mp[balance] = i;
     }
     }
     return maxLen;
    }
};
