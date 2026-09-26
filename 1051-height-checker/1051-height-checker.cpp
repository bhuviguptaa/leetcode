class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count[101] = {};
        for(int h :  heights) count[h]++; 
        int ans = 0;
        int expected = 1;
        for(int i = 0; i<heights.size();i++){
            while(count[expected]==0) expected++;
            if(heights[i]!=expected) ans++;
            count[expected]--;
        }
        return ans;        
    }
};