#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> answerQueries(vector<int> &nums, vector<int> &queries)
{

    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++)
        nums[i] = nums[i] + nums[i - 1];

    vector<int> psum(nums[nums.size() - 1] + 1, 0);

    for (int i = 0; i < queries.size(); i++)
    {
        for (int j = nums[i]; j < nums[i + 1]; j++)
        {
            psum[j] = i + 1;
        }
    }

    for (int i = 0; i < queries.size(); i++)
    {
        if (queries[i] >= nums[nums.size() - 1])
        {
            queries[i] = nums.size() - 1;
        }
        else
            queries[i] = psum[queries[i]];
    }
    return queries;
}

int main()
{

    return 0;
}