﻿//145. 二叉树的后序遍历
//
//给定一个二叉树，返回它的 后序 遍历。
//
//示例 :
//
//输入: [1, null, 2, 3]
//1
//\
//2
///
//3
//
//输出: [3, 2, 1]
//进阶 : 递归算法很简单，你可以通过迭代算法完成吗？


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
        vector<int> postorderTraversal(TreeNode* root) {
            vector<int> ret;
            stack<TreeNode*> st;
            TreeNode* lastNode = NULL;
            TreeNode* cur = root;
            while (cur || !st.empty())
            {
                //先把左路节点入栈
                while (cur)
                {
                    st.push(cur);
                    cur = cur->left;
                }
                TreeNode* top = st.top();
                if (top->right == NULL || top->right == lastNode)
                {
                    ret.push_back(top->val);
                    lastNode = top;
                    st.pop();
                }
                else
                {
                    cur = top->right;
                }
            }
            return ret;
        }
};