/*
Problem: Level Order Traversal (Binary Tree)
Approach: BFS using Queue
Time Complexity: O(n)
Space Complexity: O(n)

Tags: C++, Tree, BFS, Queue
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> result;

    if (!root) return result;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front();
            q.pop();

            level.push_back(node->val);

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        result.push_back(level);
    }

    return result;
}
