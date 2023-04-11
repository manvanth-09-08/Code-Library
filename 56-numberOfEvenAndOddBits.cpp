https://leetcode.com/problems/number-of-even-and-odd-bits/


class Solution {
public:
    vector<int> evenOddBit(int n) {
        
            int i=0;
            int even=0,odd=0;

            while(n){
                int x=n&1;
                if(i%2)
                    odd+=x;
                else
                    even+=x;

                n=n>>1;
                i++;
            }

            vector<int> v;
            v.push_back(even);
            v.push_back(odd);
            return v;

        }
};