https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        for( ;s[i]==' ';i--);
        cout<<i;
        int count=0;
        while(i>=0 && s[i]!=' ' ){
            i--;
            cout<<i<<endl;
            count++;
        }

        return count;
        
    }
};