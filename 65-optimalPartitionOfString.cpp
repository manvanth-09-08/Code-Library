https://leetcode.com/problems/optimal-partition-of-string/


class Solution {
public:
    int partitionString(string s) {
        set<char> se;
        int count=0;
        for(int i=0;i<s.length();i++){
           if(se.find(s[i])!=se.end()){
               count++;
               se.clear();
           }
           se.insert(s[i]);
        }

        return count+1;
    }
};