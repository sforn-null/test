//104. ��������������
//����һ�����������ҳ��������ȡ�
//
//�����������Ϊ���ڵ㵽��ԶҶ�ӽڵ���·���ϵĽڵ�����
//
//˵�� : Ҷ�ӽڵ���ָû���ӽڵ�Ľڵ㡣
//
//ʾ����
//����������[3, 9, 20, null, null, 15, 7]��
//
//3
/// \
//9  20
/// \
//15   7
//�������������� 3 ��

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root)
{
	if (root == NULL)
		return 0;
	//if (BinaryTreeDepth(root->_left) > BinaryTreeDepth(root->_right))
	//{
	//	return BinaryTreeDepth(root->_left) + 1;
	//}
	//else
	//{
	//	return BinaryTreeDepth(root->_right) + 1;
	//}
	int leftdepth = maxDepth(root->left);
	int rightdepth = maxDepth(root->right);
	return leftdepth > rightdepth ? leftdepth + 1 : rightdepth + 1;
}