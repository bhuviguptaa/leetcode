class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int left = 0;
       int right = nums.size()-1;
       int n =  nums.size();
       if(n==0) return;
       k=k%n;
       if(k==0) return;
        while(left<right){
             swap(nums[left],nums[right]);
             left++;
             right--;
        }
        left = 0;
        right = k-1;
         while(left<right){
             swap(nums[left],nums[right]);
             left++;
             right--;
        }
        left = k;
        right = n-1;
         while(left<right){
             swap(nums[left],nums[right]);
             left++;
             right--;
        }
    }
};