// #####------------------------##### \\
// 
// Github Username : ujjwalgupta07
// Question Link : https://leetcode.com/problems/binary-tree-level-order-traversal/
// 
// #####------------------------##### \\

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

    void printLO(TreeNode *root, vector<vector<int> > &check, int level)
    {
        if(root == NULL)
            return;
        if(level == check.size())
            check.push_back({root->val});
        else
            check.at(level).push_back(root->val);

        printLO(root->left, check, level + 1);
        printLO(root->right, check, level + 1);
    }

    vector<vector<int>> levelOrder(TreeNode* root)
    {
        vector<vector<int>> check;
        printLO(root, check, 0);

        return check;
    }
};
