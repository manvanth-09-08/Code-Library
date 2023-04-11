https://leetcode.com/problems/longest-increasing-subsequence/


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        int i,j,a[nums.size()];
        for(int i=0;i<nums.size();i++)  
            a[i]=1;
        
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    if(a[j]+1>a[i])
                        a[i]=a[j]+1;
                }
            }
        }

        int max=0;
        for(int i=0;i<nums.size();i++) {
            if(a[i]>max)
                max=a[i];
        }

        return max;
        
    }
};