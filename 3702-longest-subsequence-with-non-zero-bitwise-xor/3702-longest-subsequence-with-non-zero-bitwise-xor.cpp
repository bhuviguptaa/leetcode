class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x = 0;
        int n = nums.size();
        bool nonZero = false;
        for(int i = 0; i<n ; i++){
            x= x^nums[i];
            if(nums[i]!=0){
                nonZero = true;
            }
        }
        if(x!=0){
            return n;
        }
        if(nonZero){
            return n-1;
        }
        return 0;
    }
};