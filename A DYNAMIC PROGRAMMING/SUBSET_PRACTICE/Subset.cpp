#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, vector<vector<int>> &res)
{
    int n = nums.size();
    int total = pow(2, n);

    for (int i = 0; i < total; i++)
    {
        vector<int> v;
        bitset<32> b(i);

        // for(int i=0;i<b.size();)

        int j = nums.size() - 1;
        while (b != 0)
        {
            if (b[0] & 1 == 1)
            {
                v.push_back(nums[j]);
                // cout << i;
            }
            j--;
            b = b >> 1;
        }
        res.push_back(v);
    }
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> res;

    solve(nums, res);
  
    return res;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    subsets(nums);
    return 0;
}
