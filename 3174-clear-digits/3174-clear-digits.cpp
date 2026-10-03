class Solution {
public:
    string clearDigits(string s) {
      stack<int> st;
      for(char c : s){
        if(!st.empty() && isdigit(c)){
            st.pop();
        }
        else{
            st.push(c);
        }
      }
        string ans = "";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
 
      reverse(ans.begin(),ans.end());
        return ans;
    }
};