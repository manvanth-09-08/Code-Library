https://leetcode.com/problems/search-insert-position/

class Solution {
public:
int searchInsert(vector<int>& a, int target) {
int l=0,r=a.size()-1;
int mid=(l+r)/2;

        while(l<=r){
            mid=(l+r)/2;
            if(a[mid]==target)
                return mid;
            else{
                if(target>a[mid])
                    l=mid+1;
                else
                    r=mid-1;
            }
        }
        return l;
    }

};
