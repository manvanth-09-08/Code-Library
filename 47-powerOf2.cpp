https://leetcode.com/problems/power-of-two/


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(!n)
            return false;
        double aux=log2(n);
        if(aux==floor(aux))
            return true;
        return false;
        
    }
};