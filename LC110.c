//#include<stdio.h>
//
////����һ�����������ж����Ƿ��Ǹ߶�ƽ��Ķ�������
////
////�����У�һ�ø߶�ƽ�����������Ϊ��
////
////һ��������ÿ���ڵ� ���������������ĸ߶Ȳ�ľ���ֵ������ 1 ��
//
//
////ʱ�临�Ӷ���O(N*N)
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
////����ʹ�õ���ǰ���жϣ����¼���߶ȴ��ڴ������ظ�
////���ʹ�ú��򣬿��Ա���
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