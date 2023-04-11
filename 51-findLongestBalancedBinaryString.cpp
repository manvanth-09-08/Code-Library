https://leetcode.com/problems/find-the-longest-balanced-substring-of-a-binary-string/

class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        
        int maxi=0;
        
        int zCount=0,oCount=0;
        int i=0;
        while(i<s.length()){
            if(s[i]=='0'){
                while(s[i]=='0' && i<s.length()){
                    i++;
                zCount++;
                }
                
                while(s[i]=='1' && i<s.length()){
                    i++;
                    oCount++;
                }
                
                maxi=max(maxi,min(zCount,oCount));
                zCount=0;
                oCount=0;
                i--;
                
            }
            i++;
            
        }
        
        return maxi*2;
        
    }
};