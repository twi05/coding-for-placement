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

void helper(TreeNode *root, int low, int high, int &sum)
{

    if (!root)
        return;

    int val = root->val;

    if (low < val)
        helper(root->left, low, high, sum);

    if (low > val)
        helper(root->right, low, high, sum);

    if (high < val)
        helper(root->left, low, high, sum);

    if (high > val)
        helper(root->right, low, high, sum);

    sum = ((val >= low && val <= high) ? val : 0);
}
int rangeSumBST(TreeNode *root, int low, int high)
{
    int sum = 0;
    helper(root, low, high, sum);
    return sum;
}

int rangeSumBST(TreeNode *root, int low, int high)
{

    if (!root)
        return 0;

    int val = root->val;
    int sum = 0;

    if (low < val)
        sum += rangeSumBST(root->left, low, high);

    if (high > val)
        sum += rangeSumBST(root->right, low, high);

    return (val >= low && val <= high) ? sum + val : sum;
}

int main()
{

    return 0;
}