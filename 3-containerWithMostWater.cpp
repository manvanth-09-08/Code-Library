//https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& a) {
        int left=0,right=a.size()-1,maxArea=0;
       while(left<right){
           if(min(a[left],a[right])*(right-left)>maxArea)
                maxArea=min(a[left],a[right])*(right-left);
            if(a[right]<a[left])
                right--;
            else
                left++;
       }
        return maxArea;
        
    }
};