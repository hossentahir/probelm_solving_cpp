#include <iostream>
using namespace std;

// Tree node structure
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function for DFS traversal on a tree
void dfs(TreeNode* root) {
    if (root == NULL) {
        return;
    }

    cout << root->data << " ";

    dfs(root->left);
    dfs(root->right);
}

int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Perform DFS traversal on the tree
    cout << "DFS traversal on the tree: ";
    dfs(root);
    cout << endl;

    // Clean up memory
    delete root->left->right;
    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
