https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
long long kthLargestLevelSum(TreeNode* root, int k) { 
         
        vector<long long> result; 
        deque<TreeNode*>dq; 
        dq.push_back(root); 
        while(dq.size()){ 
            int l=dq.size(); 
            long long sum=0; 
            for(int i=0;i<l;i++){ 
                auto top=dq.front(); 
                dq.pop_front(); 
                sum+=top->val; 
                if(top->left){ 
                    dq.push_back(top->left); 
                } 
                if(top->right){ 
                    dq.push_back(top->right); 
                } 
            } 
            result.push_back(sum); 
        } 
        sort(result.begin(),result.end()); 
        if(result.size()<k) 
        {
             return -1; 
        }
       
        return result[result.size()-k]; 
    }
};