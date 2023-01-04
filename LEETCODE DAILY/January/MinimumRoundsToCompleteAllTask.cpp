#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int minimumRounds(vector<int> &tasks)
{
    map<int, int> m;

    for (auto ele : tasks)
        m[ele]++;
    int totalTasks, temp, ans = 0;

    for (auto a : m)
    {
        int n = a.second;
        if (n < 2)
        {
            return -1;
        }
        else if (n >= 3 && (n % 3) == 0)
        {
            ans += a.second / 3;
        }
        else if (n >= 3 && (n % 3))
        {
            ans += a.second / 3;
            ++ans;
        }
        else if (n == 2)
        {
            ans++;
        }
    }
    return ans;
}
int main()
{
    vector<int> v = {2, 2, 3, 3, 2, 4, 4, 4, 4, 4};
    cout << minimumRounds(v);
    return 0;
}