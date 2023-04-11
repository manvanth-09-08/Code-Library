https://leetcode.com/problems/can-place-flowers/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

         int count=0;

         if(!n)
            return true;
        
        if(flowerbed.size()==1){
            if(!flowerbed[0])
                count++;
            if(count==n)
                return true;
            else
                return false;
        }

       

        for(int i=0;i<flowerbed.size();i++){
           
            if(i==0){
                if(flowerbed[i]==0 && flowerbed[i+1]==0){
                    count++;
                    flowerbed[0]=1;
                }
                    
                
            }

            else if(i==flowerbed.size()-1){
                if(!flowerbed[i-1] && !flowerbed[i])
                    count++;
            }

            else {
                if(!flowerbed[i-1] && !flowerbed[i+1] && !flowerbed[i]){
                    count++;
                    flowerbed[i]=1;
                }
                    
            }

             if(count==n)
                return true;

            
        }
       

        return false;
        
    }
};