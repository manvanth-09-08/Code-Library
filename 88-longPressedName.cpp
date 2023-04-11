https://leetcode.com/problems/long-pressed-name/


class Solution {
public:
    bool isLongPressedName(string name, string typed) {
       
        int i=0,j=0;
        while(j<typed.size() && i<name.size()){
            if(name[i]==typed[j]){
                i++;
                j++;
            }

            else if(j!=0 && typed[j] == typed[j-1])
                j++;

            else
                return false;
        }

        if(i==name.size()){
            while(j<typed.size()){
                if(typed[j]!=name[name.size()-1])
                    return false;
                j++;
            }
            return true;
        }

        return false;
    }
};