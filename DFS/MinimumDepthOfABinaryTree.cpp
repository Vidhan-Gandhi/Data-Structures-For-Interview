#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    
    // Constructor to easily create new nodes
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int minDepth(TreeNode* root){
    if(root==NULL)
    {
        return 0;
    }
    int left=minDepth(root->left);
    int right=minDepth(root->right);
    if(root->left==NULL)
    {
        return 1+right;
    }
    else if(root->right==NULL)
    {
        return 1+left;
    } 
    return 1+min(left,right);
    
}

int main()
{
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    root->right->left=new TreeNode(6);
    root->right->right=new TreeNode(7);
    cout<<minDepth(root)<<endl;
    //Tree will look like this:
    //         1
    //       /   \
    //      2     3
    //     / \   / \
    //    4   5 6   7
}