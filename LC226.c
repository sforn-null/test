#include<stdio.h>

//��תһ�ö�������


 struct TreeNode {
     int val;
     struct TreeNode *left;
    struct TreeNode *right;
 };
 


struct TreeNode* invertTree(struct TreeNode* root)
{
    if (root == NULL)
        return NULL;
    struct TreeNode* tmp = root->left;
    root->left = root->right;
    root->right = tmp;
    invertTree(root->left);
    invertTree(root->right);
    return root;
}

//�����ǵ�һ�ַ���������ǰ��

struct TreeNode* invertTree(struct TreeNode* root)
{
    if (root == NULL)
        return NULL;
    struct TreeNode* right = root->right;
    root->right = invertTree(root->left);
    root->left = invertTree(right);
    return root;
}

////���Ǻ���