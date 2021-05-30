//144. 二叉树的前序遍历
//给你二叉树的根节点 root ，返回它节点值的 前序 遍历。
//
//
//
//示例 1：
//
//
//输入：root = [1, null, 2, 3]
//输出：[1, 2, 3]
//示例 2：
//
//输入：root = []
//输出：[]
//示例 3：
//
//输入：root = [1]
//输出：[1]
//示例 4：
//
//
//输入：root = [1, 2]
//输出：[1, 2]
//示例 5：
//
//
//输入：root = [1, null, 2]
//输出：[1, 2]
//
//
//提示：
//
//树中节点数目在范围[0, 100] 内
//- 100 <= Node.val <= 100
//
//
//进阶：递归算法很简单，你可以通过迭代算法完成吗？

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
        vector<int> preorderTraversal(TreeNode* root) {
            vector<int> ret;
            stack<TreeNode*> st;

            TreeNode* cur = root;
            while (cur || !st.empty())
            {
                //先访问左路节点
                while (cur)
                {
                    ret.push_back(cur->val);
                    st.push(cur);
                    cur = cur->left;
                }
                //再访问左路节点的右子树
                //先出栈一个，然后将右节点入栈
                TreeNode* top = st.top();
                st.pop();
                cur = top->right;
            }
            return ret;
        }
};