#include<stdio.h>

//翻转一棵二叉树。


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

//上面是第一种方法，属于前序

struct TreeNode* invertTree(struct TreeNode* root)
{
    if (root == NULL)
        return NULL;
    struct TreeNode* right = root->right;
    root->right = invertTree(root->left);
    root->left = invertTree(right);
    return root;
}

////这是后序