#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxIceCream(vector<int> &costs, int coins)
{
    sort(costs.begin(), costs.end());
    int total = 0;

    for (int i = 0; i < costs.size(); i++)
    {
        if (coins - costs[i]   >= 0)
        {
            total++;
            coins -= costs[i];
        }
        else
            break;
    }

    return total;
}
int main()
{

    return 0;
}   