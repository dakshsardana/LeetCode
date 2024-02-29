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
    int findBottomLeftValue(TreeNode* root) {
        int ans=0, level=-1;
        queue<TreeNode*> q; 
        q.emplace(root);
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            if (!node) continue;
            ans=node->val;
            q.emplace(node->right);
            q.emplace(node->left);
        }

        return ans;
    }
};
