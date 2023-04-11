https://leetcode.com/problems/left-and-right-sum-differences/

class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        
        int left=0,right=0;
        for(int i=1;i<nums.size();i++)
            right+=nums[i];
        vector<int> v;
        for(int i=0;i<nums.size()-1;i++){
            v.push_back(abs(left-right));
            left+=nums[i];
            right-=nums[i+1];
        }
        v.push_back(abs(left-right));
        
        return v;
        
        
        
    }
};