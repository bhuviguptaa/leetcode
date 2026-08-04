class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi= nums[0];
        int mini = nums[0];
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>maxi){
                maxi= nums[i];
            }
            else if(nums[i]<mini){
              mini= nums[i];
            }
        }
          
            for(int i=mini; i<=maxi; i++){
                bool found = false;
                for(int j = 0; j<nums.size(); j++){
                    if(nums[j]==i){
                    found = true;
                    break;
                }
                }
                if(!found){
                    ans.push_back(i);
                }
            }
            return ans;
        }
     
 
    };
