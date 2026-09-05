class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans = nums;
        for(int i = 0; i<n;i++){
            ans.push_back(nums[n-i-1]);
        }
        return ans;
    }
};