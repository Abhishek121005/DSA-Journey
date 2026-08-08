

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
