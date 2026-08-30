class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
       int mini = 0;
       int maxi = 0;
       for(int i = 0; i<nums.size();i++){
        if(nums[i]<nums[mini]){
            mini = i;
        }if(nums[i]>nums[maxi]){
            maxi = i;
        }
       }if(mini>maxi){
        swap(mini, maxi);
       } 
       int front = maxi + 1;
       int back = nums.size()-mini;
       int both = (mini+1)+(nums.size()-maxi);
       return min({front, back, both});
    }
};