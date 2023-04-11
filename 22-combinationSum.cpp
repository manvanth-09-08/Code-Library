https://leetcode.com/problems/combination-sum/

class Solution {
public:
     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> r;
        combin(res,r,candidates,target,0);
        return res;
    }
    void combin(vector<vector<int>> &res, vector<int> r, vector<int>& c, int t, int s){
        if(s == t){
            cout<<s<<endl;
            sort(r.begin(),r.end());
            if(res.size()<=0){
                res.push_back(r);
            }else{
                bool flag =false;
                for(int i=0; i < res.size(); i++){
                    if(r == res[i]){
                        flag = true;
                        break;
                    }
                }
                if(!flag){
                    res.push_back(r);
                }
            }
            
        }else if(s < t){
            for(int i = 0; i <c.size(); i++ ){
                int sum = s+ c[i];
                r.push_back(c[i]);
                combin(res, r,c,t,sum);
                r.pop_back();
            }
        }
    }
};