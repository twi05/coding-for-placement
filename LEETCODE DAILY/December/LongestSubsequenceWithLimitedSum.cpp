#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> answerQueries(vector<int> &v, vector<int> &q)
{
    sort(v.begin(), v.end());
    for (int i = 1; i < v.size(); i++)
        v[i] += v[i - 1];
    vector<int> ans;
    for (int x : q)
    {
        int l = 0, r = v.size() - 1;
        int mid;
        while (l <= r)
        {
            mid = r - (r - l) / 2;
            if (v[mid] < x)
                l = mid + 1;
            if (v[mid]>x)
                r = mid - 1;
            else{
                break;
            }
        }
        
        if(v[mid]>x)
        mid--;


        ans.push_back(mid);
    }
    return ans;
}




vector<int> answerQueries(vector<int> &v, vector<int> &q)
{
    sort(v.begin(), v.end());
    for (int i = 1; i < v.size(); i++)
        v[i] += v[i - 1];
    vector<int> ans;
    for (int x : q)
    {
        int idx = upper_bound(v.begin(), v.end(), x) - v.begin();
        ans.push_back(idx);
    }
    return ans;
}

vector<int> answerQueries(vector<int> &nums, vector<int> &queries)
{
    if (nums.size() == 1)
    {
        for (int i = 0; i < queries.size(); i++)
        {
            if (queries[i] >= nums[0])
            {
                queries[i] = 1;
            }
            else
                queries[i] = 0;
        }
    }
    else
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
                queries[i] = nums.size();
            }
            else
                queries[i] = psum[queries[i]];
        }
    }
    return queries;
}

int main()
{

    return 0;
}