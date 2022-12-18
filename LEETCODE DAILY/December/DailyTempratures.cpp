#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> dailyTemperatures(vector<int> &t)
{
    vector<int> res;
    stack<int> st;
    int n = t.size();
    int prev = 0;
    int curr = 0;


    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= t[i])
        {
            st.pop();
        }

        if (st.empty())
            res.push_back(-1);

        else
            res.push_back(st.top());

        st.push(t[i]);
    }
    for (int i = n - 1; i >= 0; i--)
        cout << " " << res[i];

    return res;
}

int main()
{
    vector<int> t = {2, 50, 3, 1, 2, 90};
    dailyTemperatures(t);
    return 0;
}