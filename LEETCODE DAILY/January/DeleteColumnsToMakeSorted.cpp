#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int minDeletionSize(vector<string> &strs)
{
    int count = 0;

    for (int i = 0; i < strs[0].size(); i++)
    {
        for (int j = 0; j < strs.size() - 1; j++)
        {
            if (strs[j][i] > strs[j+1][i])
            {

                count++;
                break;
            }
        }
    }

    return count;
}
int main()
{
    return 0;
}