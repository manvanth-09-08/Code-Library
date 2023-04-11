class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        multimap<int,int> m;
        for(int i=0;i<nums.size();i++){
            m.insert({nums[i],i});
        }

        vector<int> res;
        for(auto itr:m){
            auto aux=m.find(target-itr.first);
            if(m.find(target-itr.first)!=m.end()){
                if(aux->second != itr.second)
                {
                    res.push_back(aux->second);
                    res.push_back(itr.second);
                    return res;
                }
            }
        }

        return res;
        
        
    }
};



/////////// ALGORITHM //////////////////
/*

1. Create a multimap with key as the element and value as the index of the element.
2. Iterate through the multimap and find the element which is equal to target - current element.
3. If the element is found, check if the index of the element is same as the current element.
4. If the index is not same, then return the index of the current element and the index of the element found in step 2.
5. If the index is same, then continue the iteration.
6. If the element is not found, then continue the iteration.
7. If the element is not found, then return an empty vector.




*/  