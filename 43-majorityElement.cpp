https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& arr) {
         int count=0;
        int candidate=-1;

        for(int i=0;i<arr.size();i++){
            if(count==0)
                candidate=arr[i];
            count+=(arr[i]==candidate)?1:-1;
        }

        return candidate;
    }
};