https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& a) {

        int j=1,k=0;
        for(int i=1;i<a.size();i++){
            if(a[i]==a[i-j]){
                j++;
                k++;
            }
            else{
                a[i-k]=a[i];
            }
        }

        return a.size()-k;


        
        
    }
};