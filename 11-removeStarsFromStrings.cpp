//// Question : https://leetcode.com/problems/removing-stars-from-a-string/ ////

class Solution {
public:
    string removeStars(string s) {
        stack<char> st;

        for(int i=0;i<s.size();i++){
            if(s[i]=='*')
                st.pop();
            else
                st.push(s[i]);
        }
        string res="";
        while(st.size()){
            char aux = st.top();
            res+=aux;
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};