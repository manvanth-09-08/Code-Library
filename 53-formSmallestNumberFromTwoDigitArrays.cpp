https://leetcode.com/problems/form-smallest-number-from-two-digit-arrays/

class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) 
    {
        map<int , int> map1;
        map<int  , int > map2;
        for(int i = 0  ; i < nums1.size() ; i++)
        {
            map1[nums1[i]]++;
        }
        for(int i = 0  ; i < nums2.size() ; i++)
        {
            map2[nums2[i]]++;
        }
        for(auto &e : map1)
        {
            if(map2.find(e.first) != map2.end())
            {
                return e.first;
            }
        }
        int ma1 = *min_element(nums1.begin() , nums1.end());
        int ma2 = *min_element(nums2.begin() , nums2.end());
        if(ma1 < ma2)
        {
            return ma1 * 10 + ma2;
        }
        
        return ma2 * 10 + ma1;
    }
};