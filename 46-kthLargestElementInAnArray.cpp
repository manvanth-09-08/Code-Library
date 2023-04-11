https://leetcode.com/problems/kth-largest-element-in-an-array/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<k;i++){
            pq.push(nums[i]);   //inserting first k elments into heap
        }
        for(int i=k;i<nums.size();i++){
            if(pq.top()<nums[i]){   //if top of min-heap is smaller than the curr element that means ,the top element should not be the part of k greater elements, 
                pq.pop(); //therefore pop it 
                pq.push(nums[i]);  //and push the curr element
            }
        }
        return pq.top();
    }
};