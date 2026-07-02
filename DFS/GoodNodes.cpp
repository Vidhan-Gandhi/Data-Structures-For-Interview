//Good Nodes in Binary Tree
//Link: https://leetcode.com/problems/count-good-nodes-in-binary-tree/
//logic: we will traverse the tree and keep track of the maximum value seen so far, if the current node's value is greater than or equal to the maximum value seen so far then we will increment the count of good nodes and update the maximum value seen so far

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    
    // Constructor to easily create new nodes
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
int totalcount=0;
void good(TreeNode* root,vector<int>& ans)
{
    if(root==NULL)
    {
        return;
    }
    bool flag=false;
    if(ans.empty() || ans.back()<=root->val)
    {
        flag=true;
        ans.push_back(root->val);
        totalcount++;
    }
    good(root->left,ans);
    good(root->right,ans);
    if(flag==true)
    {
        ans.pop_back();
    }
    return;
}

int main() {
    // Create a binary tree
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->left->left = new TreeNode(3);
    root->right->right = new TreeNode(5);
    //Tree will look like this:
    //         3
    //       /   \
    //      1     4
    //     /       \
    //    3         5
    
    vector<int> ans;
    good(root,ans);
    cout<<totalcount<<endl;
    
    return 0;
}