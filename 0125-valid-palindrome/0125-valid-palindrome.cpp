class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(int i=0;i<s.length();i++){
            char ch= s[i];
            if((ch >= 'A' && ch <= 'Z' ) || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= 
            '9')){
                ans.push_back(tolower(ch));
            }
        }
        for(int i=0;i<ans.length()/2;i++){
            if(ans[i] != ans[ans.length()-1-i]) return false;
        }
        return true;
    }
};