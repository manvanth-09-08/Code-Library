https://leetcode.com/problems/pass-the-pillow/

class Solution {
public:
    int passThePillow(int n, int time) {
        
        int aux=time/(n-1);
        
        if(aux%2){
            int aux2= time%(n-1);
            return n-aux2;
        }
        
        else{
             int aux2 = time%(n-1);
            return aux2+1;
        }
        
    }
};