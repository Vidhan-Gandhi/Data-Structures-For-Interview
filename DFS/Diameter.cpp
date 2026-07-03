//Diameter of a tree
//logic: we will traverse the tree and keep track of the maximum value seen so far, the maximum value seen so far will be the diameter of the tree
//link: https://leetcode.com/problems/diameter-of-binary-tree/

#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    
    // Constructor to easily create new nodes
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


int dfs(TreeNode* root, int& maxi)
{
    if(root==NULL)
        {
            return 0;
        }
        int left=dfs(root->left,maxi);
        int right=dfs(root->right,maxi);
        maxi=max(maxi,left+right);
        return 1+max(left,right);
}

int main() {
    // Create a binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    //Tree will look like this:
    //         1
    //       /   \
    //      2     3
    //     / \   / \
    //    4   5 6   7
    int maxi=0;
    dfs(root,maxi);
    cout<<maxi<<endl;
    
    return 0;
}