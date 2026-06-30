#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    
    // Constructor to easily create new nodes
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void sumof(TreeNode* root,vector<int>& ans){
    if(root==NULL)
    {
        return;
    }
    sumof(root->left,ans);
    sumof(root->right,ans);
    ans.push_back(root->val);
}

int main(){
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    root->right->left=new TreeNode(6);
    root->right->right=new TreeNode(7);
    vector<int> ans;
    sumof(root,ans);
    cout<<ans.size()<<endl;
}