https://leetcode.com/problems/split-with-minimum-sum/


class Solution {
public:
    int splitNum(int num) {
        
       vector<int> v;
        
        while(num)
        {
            v.push_back(num%10);
            num=num/10;
        }
        
        sort(v.begin(),v.end());
        
        
        int j=v.size()-1;
        int x=0,y=0;
        for(int i=0;i<v.size();i+=2){
           x=x*10+v[i];
        }
        
        for(int i=1;i<v.size();i+=2){
           y=y*10+v[i];
        }
        
        
        return x+y;
    }
};