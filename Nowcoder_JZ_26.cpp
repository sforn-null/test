//二叉搜索树与双向链表
//描述
//输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。要求不能创建任何新的结点，只能调整树中结点指针的指向。
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
        //cur在这里出现的顺序就是中序，也就是有序
        //当前节点的左指向前一个，当前节点的右指向下一个
        //但不知道下一个节点是谁，因此这里让上一个节点的右边指向我
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