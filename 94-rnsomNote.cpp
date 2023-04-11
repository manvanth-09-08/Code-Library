https://leetcode.com/problems/ransom-note/


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> m;
        for(int i=0;i<ransomNote.size();i++)
            m[ransomNote[i]]++;
         for(int i=0;i<magazine.size();i++)
            m[magazine[i]]--;

        for(auto itr:m)
        {
            if(itr.second>0)
                return false;
        }

        return true;
    }
};