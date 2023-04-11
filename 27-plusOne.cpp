https://leetcode.com/problems/plus-one/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0,flag=0;

        for(int i=digits.size()-1;i>=0;i--){
            if(digits[digits.size()-1]==9){
                flag++;
                carry=1;
                digits[digits.size()-1]=0;
            }

            else{
                if(carry){
                if(digits[i]==9){
                carry=1;
                digits[i]=0;
                }

                else{
                    digits[i]++;
                    carry=0;
                    break;
                }

                }
                

            }

            
        }
        vector<int> res;
        if(carry){
            res.push_back(1);
            for(int i=0;i<digits.size();i++){
                res.push_back(digits[i]);
            }
            return res;
        }
        if(!flag){
            digits[digits.size()-1]++;
        }
        return digits;

    }
};