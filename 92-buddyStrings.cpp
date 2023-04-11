https://leetcode.com/problems/buddy-strings/

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        map<char,int> m;
        int count=0;
        for(int i=0;i<s.size();i++)
            m[s[i]]++;
        for(int i=0;i<goal.size();i++){
            m[goal[i]]--;
            if(s[i]!=goal[i])
                count++;
        }

        for(auto itr:m){
            if(itr.second)
                return false;
        }

        if(count==2){
            return true;
        }

        if(!count){
            if(m.size()%s.size()!=0)
                return true;
        }

        return false;
    }
};