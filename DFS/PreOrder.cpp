#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    
    // Constructor to easily create new nodes
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void PreOrder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    
    // Visit the root node
    cout << root->val << " ";
    
    // Traverse the left subtree
    PreOrder(root->left);
    
    // Traverse the right subtree
    PreOrder(root->right);
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
    PreOrder(root);
    cout << endl;

    return 0;
}