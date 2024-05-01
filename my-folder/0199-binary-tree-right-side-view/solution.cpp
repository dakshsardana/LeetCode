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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> temporary;
        vector<int> ans;
        if(!root)return ans;
        q.push(root);
        q.push(NULL);
        while (!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            if (temp){
                temporary.push_back(temp->val);
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
                }
                else{
                    reverse(temporary.begin(),temporary.end());
                    ans.push_back(temporary[0]);
                    temporary.clear();
                    if(!q.empty())q.push(NULL);
                }
        }
        return ans;
    }

};
