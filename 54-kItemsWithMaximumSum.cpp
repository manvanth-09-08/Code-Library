https://leetcode.com/problems/k-items-with-the-maximum-sum/

class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int count=0;
        
        count+=min(1*numOnes,k);
        k=k-numOnes-numZeros;
        if(k<0)
            return count;
    
       
        
        count+=max(-1*numNegOnes,-1*k);
        
        return count;
        
        
        
    }
};