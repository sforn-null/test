105. 从前序与中序遍历序列构造二叉树
根据一棵树的前序遍历与中序遍历构造二叉树。

注意 :
你可以假设树中没有重复的元素。

例如，给出

前序遍历 preorder = [3, 9, 20, 15, 7]
中序遍历 inorder = [9, 3, 15, 20, 7]
返回如下的二叉树：

   3
  / \
  9  20
 / \
15   7

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
        TreeNode* _buildTree(vector<int>& preorder, vector<int>& inorder, int& prei, int inbegin, int inend) {
            if (inbegin > inend)
            {
                return NULL;
            }
            TreeNode* root = new TreeNode(preorder[prei]);
            int rooti = inbegin;
            while (rooti <= inend)
            {
                if (inorder[rooti] == preorder[prei])
                    break;
                else
                    ++rooti;
            }
            if (inbegin <= rooti - 1)
            {
                root->left = _buildTree(preorder, inorder, ++prei, inbegin, rooti - 1);
            }
            else
            {
                root->left = NULL;
            }
            if (rooti + 1 <= inend)
            {
                root->right = _buildTree(preorder, inorder, ++prei, rooti + 1, inend);
            }
            else
            {
                root->right = NULL;
            }
            return root;
        }

        TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
            int prei = 0;
            int inbegin = 0, inend = inorder.size() - 1;
            return _buildTree(preorder, inorder, prei, inbegin, inend);
        }
};