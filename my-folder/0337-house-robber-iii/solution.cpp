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
 #define node TreeNode
class Solution {
public:
    class Pair{
    public:
    int choriKari=0;
    int choriNahiKari;
};
Pair solve(node* root){
    Pair p;
    if (!root){
        return p;
    }
    Pair left=solve(root->left);
    Pair right=solve(root->right);
    p.choriKari=left.choriNahiKari+right.choriNahiKari+root->val;
    p.choriNahiKari=max(left.choriKari,left.choriNahiKari)+max(right.choriKari,right.choriNahiKari);
    return p;
}
int rob(node* root) {
    Pair p=solve(root);
    return max(p.choriKari,p.choriNahiKari);
}
};
