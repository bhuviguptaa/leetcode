class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
    int c = 0;
    for (int i = 0; i<s.length(); i++)
    {
        char ch =s[i];
        if (ch == '(')
            st.push(ch);
        else
        {
            if (!st.empty() && (st.top() == '('))
                st.pop();
            else
                c++;
        }
    }
    int left = st.size();
    return c + left;
    }
};