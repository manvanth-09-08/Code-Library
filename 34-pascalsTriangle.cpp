https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> result;

        vector<int> v;
        v.push_back(1);

        if(numRows==1){
            result.push_back(v);
            return result;
        }
          result.push_back(v);
        int row=0,l=0,r=0;
        for(;row<numRows-1;row++){
            v.clear();
            v.push_back(1);
           
            for(int i=0;i<r;i++){
                v.push_back(result[row][i]+result[row][i+1]);
            }
            v.push_back(1);
            result.push_back(v);
            r++;
        }

        return result;
        
    }
};