#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
void fill(TreeNode *root, vector<int> &v)
{
    if (!root->left && !root->right)
    {
        v.push_back(root->val);
        return;
    }
    if (!root)
    {
        return;
    }

    fill(root->left, v);
    fill(root->right, v);
}
bool leafSimilar(TreeNode *root1, TreeNode *root2)
{
    vector<int> first;
    vector<int> second;

    fill(root1, first);
    fill(root2, second);

    if (first.size() != second.size())
        return false;

    for (int i = 0; i < first.size(); i++)
        if (first[i] != second[i])
            return false;
    return true;
}

int main()
{

    return 0;
}