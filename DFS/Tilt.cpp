//tilt of a binary tree
//logic: tilt of a binary tree is the sum of the absolute difference between the sum of left subtree and right subtree for all nodes in the tree
//link: https://leetcode.com/problems/binary-tree-tilt/


#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    
    // Constructor to easily create new nodes
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int Tilt(TreeNode* root,vector<int>& ans)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left=Tilt(root->left,ans);
        int right=Tilt(root->right,ans);
        ans.push_back(abs(left-right));
        return left+right+root->val;
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
    
    vector<int> ans;
    Tilt(root,ans);
    int sum=0;
    for(int i=0;i<ans.size();i++)
    {
        sum+=ans[i];
    }
    cout<<sum<<endl;
    return 0;
}