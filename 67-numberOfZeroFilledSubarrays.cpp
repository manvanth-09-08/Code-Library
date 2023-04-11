https://leetcode.com/problems/number-of-zero-filled-subarrays/

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {

        vector<long long> v;
        for(int i=0;i<nums.size();i++){
            int count=0;
            if(nums[i]==0){
               
                while(i<nums.size() && nums[i]==0){
                    count++;
                    i++;
                }

                v.push_back(count);
            }
        }

        long long sum=0;

        for(int i=0;i<v.size();i++){
            cout<<v[i]<<endl;
            sum+=(v[i]*(v[i]+1))/2;
        }
        return sum;
    }
};