https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
        if(!x)
            return 0;
       long long aux;
       for(long long i=0;i<x;i++){
            aux=i*i;
           if(aux>x)
            return i-1;
       }
       return 1;
    }
};