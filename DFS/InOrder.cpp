#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    
    // Constructor to easily create new nodes
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void InOrder(TreeNode* root){
    if(root==NULL)
    {
        return;
    }
    InOrder(root->left);
    cout<<root->val<<" ";
    InOrder(root->right);
}

int main(){
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    root->right->left=new TreeNode(6);
    root->right->right=new TreeNode(7);
    InOrder(root);
    //Tree will look like this:
    //         1
    //       /   \
    //      2     3
    //     / \   / \
    //    4   5 6   7
}