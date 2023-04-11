https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int count=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            count+=nums[i];
            if(count<0){
                maxi=count>maxi?count:maxi;
                count=0;
            }
            else{
                maxi = count>maxi?count:maxi;
            }
        }

        return maxi;
        
    }
};