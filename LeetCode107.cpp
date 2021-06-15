//107. �������Ĳ������ II
//����һ����������������ڵ�ֵ�Ե����ϵĲ�������� ��������Ҷ�ӽڵ����ڲ㵽���ڵ����ڵĲ㣬���������ұ�����
//
//���磺
//����������[3, 9, 20, null, null, 15, 7],
//
//3
/// \
//9  20
/// \
//15   7
//�������Ե����ϵĲ������Ϊ��
//
//[
//    [15, 7],
//    [9, 20],
//    [3]
//]


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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> vv;
        queue<TreeNode*> q;
        if (root)
        {
            q.push(root);
        }
        while (!q.empty())
        {
            int levelSize = q.size();
            vector<int> v;
            for (size_t i = 0; i < levelSize; ++i)
            {
                TreeNode* front = q.front();
                q.pop();
                v.push_back(front->val);
                if (front->left)
                    q.push(front->left);
                if (front->right)
                    q.push(front->right);
            }
            vv.push_back(v);
        }
        reverse(vv.begin(), vv.end());
        return vv;
    }
};