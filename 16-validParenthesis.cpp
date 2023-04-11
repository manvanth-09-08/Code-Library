https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else{
                if(st.size()==0)
                    return false;
                if(s[i]==')'){
                    if(st.top()=='(')
                        st.pop();
                    else
                        return false;
                }

                else if(s[i]=='}'){
                    if(st.top()=='{')
                        st.pop();
                    else
                        return false;
                }

                else{
                    if(st.top()=='[')
                        st.pop();
                    else
                        return false;
                }
            }
        }
        if(st.size()==0)
            return true;
        return false;
    }
};