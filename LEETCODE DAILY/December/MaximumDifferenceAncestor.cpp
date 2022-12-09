#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
void calculate(TreeNode *root, int curr_root, int &maxd)
{
    if (!root)
        return;

    maxd = max(maxd, abs(curr_root - root->val));
    calculate(root->left, curr_root, maxd);
    calculate(root->right, curr_root, maxd);
}
void helper(TreeNode *root, int curr_root, int &maxd)
{
    if (!root)
        return;
    calculate(root, root->val, maxd);

    if (root->left)
        helper(root->left, root->left->val, maxd);
    if (root->right)
        helper(root->right, root->right->val, maxd);
}
int maxAncestorDiff(TreeNode *root)
{
    int maxd = INT_MIN;
    helper(root, root->val, maxd);
    return maxd;
}

int maxAncestorDiff(TreeNode *r, int mn = 100000, int mx = 0)
{
    if (r == nullptr)
        return mx - mn;
    mx = max(mx, r->val);
    mn = min(mn, r->val);
    return max(maxAncestorDiff(r->left, mn, mx), maxAncestorDiff(r->right, mn, mx));
}

int main()
{

    return 0;
}
