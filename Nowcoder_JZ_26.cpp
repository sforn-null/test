//������������˫������
//����
//����һ�ö��������������ö���������ת����һ�������˫������Ҫ���ܴ����κ��µĽ�㣬ֻ�ܵ������н��ָ���ָ��
/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/
class Solution {
public:
    void convertList(TreeNode* cur, TreeNode*& prev)
    {
        if (cur == NULL)
            return;
        convertList(cur->left, prev);
        //cur��������ֵ�˳���������Ҳ��������
        //��ǰ�ڵ����ָ��ǰһ������ǰ�ڵ����ָ����һ��
        //����֪����һ���ڵ���˭�������������һ���ڵ���ұ�ָ����
        cur->left = prev;
        if (prev)
            prev->right = cur;
        prev = cur;
        convertList(cur->right, prev);
    }
    TreeNode* Convert(TreeNode* pRootOfTree) {
        TreeNode* prev = NULL;
        convertList(pRootOfTree, prev);
        while (pRootOfTree && pRootOfTree->left)
        {
            pRootOfTree = pRootOfTree->left;
        }
        return pRootOfTree;
    }
};