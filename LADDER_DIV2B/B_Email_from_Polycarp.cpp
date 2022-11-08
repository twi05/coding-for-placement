#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        stack<pair<char, int>> sstack, tstack;
        pair<char, int> temp;
        for (int i = 0; i < s.size(); i++)
        {
            if (sstack.empty())
                sstack.push({s[i], 1});
            else
            {
                if (sstack.top().first == s[i])
                {
                    temp = sstack.top();
                    sstack.pop();
                    temp.second++;
                    sstack.push(temp);
                    continue;
                }
                else
                    sstack.push({s[i], 1});
            }
        }
        for (int i = 0; i < t.size(); i++)
        {
            if (tstack.empty())
                tstack.push({t[i], 1});
            else
            {
                if (tstack.top().first == t[i])
                {
                    temp = tstack.top();
                    tstack.pop();
                    temp.second++;
                    tstack.push(temp);
                    continue;
                }
                else
                    tstack.push({t[i], 1});
            }
        }
        bool flag = false;
        while (!sstack.empty() && !tstack.empty())
        {
            if (sstack.top().first == tstack.top().first)
            {
                if (sstack.top().second > tstack.top().second)
                {
                    cout << "NO" << endl;
                    flag = true;
                    break;
                }
                sstack.pop();
                tstack.pop();
            }
            else
            {
                cout << "NO" << endl;
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            if (sstack.empty() && tstack.empty())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}