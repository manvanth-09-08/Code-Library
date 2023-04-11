https://leetcode.com/problems/find-the-substring-with-maximum-cost/

class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        
        map<char,int> m;
        for(int i=0;i<vals.size();i++){
            m[chars[i]]=vals[i];
        }
        
        int arr[s.length()];
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])==m.end()){
                arr[i]= s[i]%'a' + 1;
                cout<<arr[i]<<endl;
            }
            
            else
                arr[i] = m[s[i]];
        }
        
        int maxCount=INT_MIN,count=0;
        
        for(int i=0;i<s.length();i++){
            count+=arr[i];
            if(count<0)
                count=0;
            if(count>maxCount)
                maxCount=count;
            
        }
        
        return maxCount;
        
    }
};