https://leetcode.com/problems/powx-n/

class Solution {
public:
    double myPow(double x, int n) {
        if(!n)
            return 1;
        double aux=x;
        if(n>0){
            for(int i=0;i<n-1;i++)
                aux=aux*x;
            return aux;
        }
        n=-1*n;
         for(int i=1;i<=n-1;i++)
                aux=1/(aux*x);
            return aux;

    }
};