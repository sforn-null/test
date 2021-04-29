//#include<stdio.h>
//
////给你二叉树的根节点 root ，返回它节点值的 前序 遍历。
//
////输入：root = [1, null, 2, 3]
////输出：[1, 2, 3]
////示例 2：
////
////输入：root = []
////输出：[]
////示例 3：
////
////输入：root = [1]
////输出：[1]
//
//
//
//
// struct TreeNode {
//     int val;
//     struct TreeNode *left;
//     struct TreeNode *right;
// };
// 
//
//
// /**
//  * Note: The returned array must be malloced, assume caller calls free().
//  */
//typedef struct TreeNode TreeNode;
//int BinaryTreeSize(TreeNode* root)
//{
//    if (root == NULL)
//        return 0;
//    else
//        return 1 + BinaryTreeSize(root->left) + BinaryTreeSize(root->right);
//}
//void _preorderTraversal(TreeNode* root, int* array, int* pi)
//{
//    if (root == NULL)
//    {
//        return NULL;
//    }
//    array[(*pi)++] = root->val;
//    //i要传地址，因为如果不传地址，i往下递归时虽然会变化，
//    //但这个变化不会影响到原来的函数
//    //也就是说左子树递归时，i逐渐变化，可回到最开始的函数
//    //右子树使用i时，i还是原来的1
//    _preorderTraversal(root->left, array, pi);
//    _preorderTraversal(root->right, array, pi);
//}
//int* preorderTraversal(struct TreeNode* root, int* returnSize)
//{
//
//    int size = BinaryTreeSize(root);
//    TreeNode* array = (TreeNode*)malloc(sizeof(TreeNode) * BinaryTreeSize(root));
//    int i = 0;
//    _preorderTraversal(root, array, &i);
//    *returnSize = size;
//    return array;
//}
