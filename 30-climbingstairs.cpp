https://leetcode.com/problems/climbing-stairs/


class Solution {
public:
    int climbStairs(int n) 
    {
        int *aux=(int*)malloc(sizeof(int)*(n+1));
           aux[n]=1;
           aux[n-1]=1;
    
      for(int i=n-2;i>=0;i--)
      {
        aux[i]=aux[i+1]+aux[i+2];
      }

    return aux[0];
        
    }
};