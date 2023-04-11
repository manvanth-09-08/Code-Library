https://leetcode.com/problems/relative-sort-array/

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& a, vector<int>& arr2) {
        
        map<int,int> m;
        for(int i=0;i<a.size();i++)
            m[a[i]]++;
        
        vector<int> v;
        for(int i=0;i<arr2.size();i++){
            v.push_back(arr2[i]);
            if(m.find(arr2[i])!=m.end()){
                for(int j=0;j<m[arr2[i]]-1;j++)
                     v.push_back(arr2[i]);
                
                m[arr2[i]]=0;
            }
        }
        
        for(auto itr:m){
            if(itr.second){
                for(int i=0;i<itr.second;i++)
                    v.push_back(itr.first);
            }
        }
        
        return v;
        
    }
};