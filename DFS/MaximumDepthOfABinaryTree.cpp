#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    
    // Constructor to easily create new nodes
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int MaximumDepth(TreeNode* root){
    if(root==NULL)
    {
        return 0;
    }
    int left=MaximumDepth(root->left);
    int right=MaximumDepth(root->right);
    return 1+max(left,right);
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
    cout<<MaximumDepth(root)<<endl;
    //Tree will look like this:
    //         1
    //       /   \
    //      2     3
    //     / \   / \
    //    4   5 6   7
}