//#include<stdio.h>
//
////����������ĸ��ڵ� root ���������ڵ�ֵ�� ǰ�� ������
//
////���룺root = [1, null, 2, 3]
////�����[1, 2, 3]
////ʾ�� 2��
////
////���룺root = []
////�����[]
////ʾ�� 3��
////
////���룺root = [1]
////�����[1]
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
//    //iҪ����ַ����Ϊ���������ַ��i���µݹ�ʱ��Ȼ��仯��
//    //������仯����Ӱ�쵽ԭ���ĺ���
//    //Ҳ����˵�������ݹ�ʱ��i�𽥱仯���ɻص��ʼ�ĺ���
//    //������ʹ��iʱ��i����ԭ����1
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
