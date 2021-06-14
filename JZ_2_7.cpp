//剑指 Offer 07. 重建二叉树
//输入某二叉树的前序遍历和中序遍历的结果，请构建该二叉树并返回其根节点。
//
//假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
//
//
//
//示例 1:
//
//
//Input: preorder = [3, 9, 20, 15, 7], inorder = [9, 3, 15, 20, 7]
//Output : [3, 9, 20, null, null, 15, 7]
//示例 2 :
//
//	Input : preorder = [-1], inorder = [-1]
//	Output : [-1]

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
private:
    unordered_map<int, int> index;
public:
    TreeNode* _bulidTree(vector<int>& preorder, vector<int>& inorder, int preorder_left, int preorder_right, int inorder_left, int inorder_right) {
        if (preorder_left > preorder_right) {
            return nullptr;
        }
        int head = preorder_left;
        int inorder_head = index[preorder[head]];
        TreeNode* root = new TreeNode(preorder[head]);
        int left_num = inorder_head - inorder_left;
        root->left = _bulidTree(preorder, inorder, preorder_left + 1, preorder_left + left_num, inorder_left, inorder_right - 1);
        root->right = _bulidTree(preorder, inorder, preorder_left + left_num + 1, preorder_right, inorder_head + 1, inorder_right);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        // 构造哈希映射，帮助我们快速定位根节点
        for (int i = 0; i < n; ++i) {
            index[inorder[i]] = i;
        }
        return _bulidTree(preorder, inorder, 0, n - 1, 0, n - 1);
    }
};