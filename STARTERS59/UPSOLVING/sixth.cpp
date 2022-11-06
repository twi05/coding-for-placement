#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int kadane(vector<int> v)
{

    int maxsum = 0;
    int currsum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        currsum += v[i];
        if (currsum <= 0)
            currsum = 0;
        
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
}

int main()
{

    int t, n, x;
    cin >> t;
    while (t--)
    {
        vector<int> a;
        vector<int> b;
        cin >> n;
        while (n--)
        {
            cin >> x;
            a.emplace_back(x);
        }
        cin >> n;
        while (n--)
        {
            cin >> x;
            b.emplace_back(x);
        }

        

        return 0;
    }