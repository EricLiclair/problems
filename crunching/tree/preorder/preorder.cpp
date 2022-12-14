// This is template generated by CPCLI [https://github.com/ericliclair/cpcli]

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// recursive
void _preorder(TreeNode *root, vi &store)
{
    if (!root)
        return;

    store.push_back(root->val);
    if (root->left)
        _preorder(root->left, store);
    if (root->right)
        _preorder(root->right, store);
}

// iterative
void _preorder_iterative(TreeNode *root, vi &store)
{
    if (!root)
        return;
    stack<TreeNode *> stack;
    stack.push(root);

    while (stack.size())
    {
        TreeNode *node = stack.top();
        stack.pop();

        store.push_back(node->val);
        if (node->right)
        {
            stack.push(node->right);
        }
        if (node->left)
        {
            stack.push(node->left);
        }
    }

    return;
}

vector<int> preorderTraversal(TreeNode *root)
{
    vi ans;
    _preorder_iterative(root, ans);
    return ans;
}

int main()
{
    cout << "Hey champ!";
    return 0;
}