105. ��ǰ��������������й��������
����һ������ǰ�������������������������

ע�� :
����Լ�������û���ظ���Ԫ�ء�

���磬����

ǰ����� preorder = [3, 9, 20, 15, 7]
������� inorder = [9, 3, 15, 20, 7]
�������µĶ�������

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