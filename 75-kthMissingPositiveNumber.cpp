https://leetcode.com/problems/kth-missing-positive-number/

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> v(10000000,0);
        for(int i=0;i<arr.size();i++)
            v[arr[i]-1]++;
        int count=0,i=0;
        while(i<10000000){
            if(!v[i]){
                cout<<i<<endl;
                count++;
                if(count==k)
                    return i+1;
                

            }
            i++;
        }

        return -1;
    }
};