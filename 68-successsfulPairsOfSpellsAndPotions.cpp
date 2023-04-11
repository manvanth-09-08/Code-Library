https://leetcode.com/problems/successful-pairs-of-spells-and-potions/

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans(spells.size());

        sort(potions.begin(),potions.end());

        for(int i=0;i<spells.size();i++){
            int l=0,r=potions.size()-1;

            while(l<=r){
                int mid=(l+r)/2;
                long long aux = (long long)potions[mid]*spells[i];
                if(aux>=success){
                    r=mid-1;
                }

                else{
                    l=mid+1;
                }

            }
            ans[i]=potions.size()-l;

            cout<<l<<endl;
        }

        return ans;
    }
};