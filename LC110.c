//#include<stdio.h>
//
////给定一个二叉树，判断它是否是高度平衡的二叉树。
////
////本题中，一棵高度平衡二叉树定义为：
////
////一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过 1 。
//
//
////时间复杂度是O(N*N)
// struct TreeNode {
//     int val;
//     struct TreeNode *left;
//     struct TreeNode *right;
// };
// 
//
//int TreeDepth(struct TreeNode* root)
//{
//	if (root == NULL)
//		return 0;
//	int leftDepth = TreeDepth(root->left);
//	int rightDepth = TreeDepth(root->right);
//	return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
//}
//
//bool isBalanced(struct TreeNode* root)
//{
//	if (root == NULL)
//		return true;
//	if (abs(TreeDepth(root->left) - TreeDepth(root->right)) > 1)
//		return false;
//
//	return isBalanced(root->left) && isBalanced(root->right);
//}
//
////上面使用的是前序判断，导致计算高度存在大量的重复
////如果使用后序，可以避免
//
//int _isBalanced(struct TreeNode* root, int* pdepth)
//{
//    if (root == NULL)
//    {
//        *pdepth = 0;
//        return true;
//    }
//    else
//    {
//        int leftdepth = 0;
//        if (_isBalanced(root->left, &leftdepth) == false)
//            return false;
//
//        int rightdepth = 0;
//        if (_isBalanced(root->right, &rightdepth) == false)
//            return false;
//
//        if (abs(leftdepth - rightdepth) > 1)
//            return false;
//
//        *pdepth = leftdepth > rightdepth ? leftdepth + 1 : rightdepth + 1;
//        return true;
//    }
//}
//bool isBalanced(struct TreeNode* root)
//{
//    int depth = 0;
//    return _isBalanced(root, &depth);
//}