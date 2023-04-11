https://leetcode.com/problems/count-total-number-of-colored-cells/

class Solution {
public:
    long long coloredCells(int n) {
        
        if(n==1)
            return 1;
        
        float x=n/2;
        
        long long first = (n/2.0)*(2+(n-1)*2);
        long long second = first - (1+(n-1)*2);
        
        cout<<first<<" "<<second<<endl;
        
        return first+second;
        
    }
};