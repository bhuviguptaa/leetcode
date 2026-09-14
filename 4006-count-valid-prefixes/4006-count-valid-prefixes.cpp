class Solution {
public:
    int countValidPrefixes(string s) {
        int n = s.size();
        int count = 0;
        int zero = 0, ones = 0;
        for(int i = 0; i<n; i++){
            if(s[i]=='0') zero++;
            else if(s[i]=='1') ones++;
            if(abs(zero-ones)<=1) count++;
        }
        return count;
    }
};