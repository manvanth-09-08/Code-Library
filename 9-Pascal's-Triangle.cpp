/////////////////// QUESTION //////////////////////////
/*
Given an integer numRows, return the first numRows of Pascal's triangle.
*/


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


/////////////// ALGORITHM ///////////////////////
/*

1. Create a vector of vectors.
2. Create a vector.
3. Push 1 into the vector.
4. If numRows is 1, then push the vector into the vector of vectors and return the vector of vectors.
5. Push the vector into the vector of vectors.
6. Create a variable row and initialize it to 0.
7. Create a variable l and initialize it to 0.
8. Create a variable r and initialize it to 0.
9. Iterate until row is less than numRows-1.
10. Clear the vector.
11. Push 1 into the vector.
12. Iterate until i is less than r.
13. Push the sum of the elements at index i and i+1 into the vector.
14. Push 1 into the vector.
15. Push the vector into the vector of vectors.
16. Increment r.
17. Return the vector of vectors.

*/
