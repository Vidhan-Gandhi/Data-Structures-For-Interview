//Path Sum in Binary Tree
//Link: https://leetcode.com/problems/path-sum/
//logic well traverse the tree and keep subtracting the value of the node from the target sum, if we reach a leaf node and the target sum is 0 then we return true else false

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    
    // Constructor to easily create new nodes
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool PathSum(TreeNode* root, int targetsum,vector<int>& path)
{
    if(root == nullptr)
    {
        return false;
    }
    targetsum -= root->val;
    path.push_back(root->val);
    if(root->left == nullptr && root->right == nullptr && targetsum == 0)
    {
        ans.push_back(path);
        path.pop_back();
        return true;
    }
    else if(root->left == nullptr && root->right == nullptr && targetsum != 0)
    {
        path.pop_back();
        return false;
    }
    else if(root->left == nullptr && root->right != nullptr)
    {
         bool lt=PathSum(root->right, targetsum,path);
            path.pop_back();
            return lt;
    }
    else if(root->left != nullptr && root->right == nullptr)
    {
        bool rt= PathSum(root->left, targetsum,path);
            path.pop_back();
            return rt;
    }
    else
    {
        bool left=PathSum(root->left, targetsum,path) ;
        bool right=PathSum(root->right, targetsum,path);
        path.pop_back();
        return left || right;
    }
    
    

}

int main() {
    // Create a binary tree
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->right->right = new TreeNode(1);
    // Tree will look like this:
    //         5
    //       /   \
    //      4     8
    //     /     / \
    //    11    13  4
    //   /  \        \
    //  7    2        1


    int targetsum = 22;
    PathSum(root, targetsum);
    cout << "Path with target sum " << targetsum << (PathSum(root, targetsum) ? " exists." : " does not exist.") << endl;

}