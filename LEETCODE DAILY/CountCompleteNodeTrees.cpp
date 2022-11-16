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

int main()
{

    return 0;
}

class Solution
{
public:
    int countNodes2(TreeNode *root)
    {
        if (!root->left && !root->right)
        {
            return 1;
        }
        if (!root->left)
        {
            return 0;
        }
        if (!root->right)
        {
            return 0;
        }

        return 1 + countNodes2(root->left) + 1 + countNodes2(root->right);
    }

    int leftheight(TreeNode *root)
    {
        if (!root)
            return 0;

        return leftheight(root->left);
    }
    int rightheight(TreeNode *root)
    {
        if (!root)
            return 0;

        return rightheight(root->right);
    }

    int countNodes(TreeNode *root)
    {

        int lh = leftheight(root);
        int rh = rightheight(root);

        if (lh == rh)
            return (1 << lh )- 1;
        else

            return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
