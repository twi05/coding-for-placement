#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maximumBags(vector<int> &c, vector<int> &rocks, int b)
{
    vector<int> v;
    for (int i = 0; i < rocks.size(); i++)
        v.push_back(c[i] - rocks[i]);
    sort(v.begin(), v.end());
    int i = 0;
    while (b > 0 and i < c.size())
    {
        b -= v[i];
        i++;
    }
    return b < 0 ? i - 1 : i;
}

int maximumBags(vector<int> &capacity, vector<int> &rocks, int additionalRocks)
{
    int cnt = 0;

    for (int i = 0; i < capacity.size(); i++)
        capacity[i] = capacity[i] - rocks[i];

    sort(begin(capacity), end(capacity));

    for (auto it : capacity)
    {o1
        if (it == 0)
        {
            cnt++;
            continue;
        }
        additionalRocks -= it;
        if (additionalRocks >= 0)
            cnt++;
        else
            break;
    }

    return cnt;
}


int main()
{

    return 0;
}