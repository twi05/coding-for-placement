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

void traverse(TreeNode *root, vector<int> &res)
{
    if (!root)
        return;

    res.push_back(root->val);
    traverse(root->left, res);
    traverse(root->right, res);
}

vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> res;
    TreeNode *temp;
    if (!root)
        return res;
    stack<TreeNode *> st;
    st.push(root);

    while (!st.empty())
    {
        temp = st.top();
        st.pop();
        res.push_back(temp->val);
        if (temp->right != NULL)
            st.push(temp->right);
        if (temp->left!= NULL)
            st.push(temp->left);
    }

    return res;
}

vector<int> preorderTraversalRecursion(TreeNode *root)
{
    vector<int> res;
    traverse(root, res);
    return res;
}
int main()
{

    return 0;
}