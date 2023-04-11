https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {

        string res="";
        for(int i=0;i<s.length();i++){
            if((s[i]>='a' && s[i]<='z')  || (s[i]>='A' && s[i]<='Z') ||(s[i]>='0' && s[i]<='9'))
                res+=tolower(s[i]);
        }

        int i=0,j=res.size()-1;
       
        while(i<=j){
            if(res[i]!=res[j])
                return false;
            i++;
            j--;
                // return false;
        }

        return true;
        
    }
};

