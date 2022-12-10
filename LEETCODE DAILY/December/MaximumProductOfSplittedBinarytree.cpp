#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;


struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

  const unsigned int M = 1000000007;
   typedef long long ll;
int total_sum(TreeNode *root)
{
    if (!root)
        return 0;

    return root->val + total_sum(root->left) + total_sum(root->right);
}
void helper(TreeNode *root, ll &mx, ll totalsum)
{
    if (!root)
        return;

    ll sub_tree_sum = total_sum(root->left);
    mx = max(((totalsum - sub_tree_sum) * sub_tree_sum), mx) ;

    sub_tree_sum = total_sum(root->right);
    mx = max(((totalsum - sub_tree_sum) * sub_tree_sum), mx);
    helper(root->left, mx, totalsum);
    helper(root->right, mx, totalsum);
}
int maxProduct(TreeNode *root)
{
    ll mx = INT_MIN;
    ll totalsum = total_sum(root);

    helper(root, mx, totalsum);
    return mx%M;
}

int main()
{

    return 0;
}


static int MOD=1e9+7;
class Solution {
public:
    long long totalTreeSum=0,result=0;
    int SumUnder(TreeNode* root)           
    {
        if(!root)
            return 0;
        long long sum=SumUnder(root->left)+SumUnder(root->right)+root->val;
        result=max(result,sum*(totalTreeSum-sum));   
        return sum;
    }
    int maxProduct(TreeNode* root) 
    {
        totalTreeSum=SumUnder(root);
        SumUnder(root);
        return result%MOD;
    }
};