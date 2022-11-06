#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;
pair<int, int> kadane(vector<int> v, int &sum)
{
    pair<int, int> p;
    int maxsum = 0;
    int currsum = 0;
    int l = 0, r = 0;
    for (int i = 0; i < v.size(); i++)
    {
        currsum += v[i];
        if (currsum <= 0)
        {
            currsum = 0;
            l = i;
        }
        if (currsum > maxsum)
        {
            maxsum = currsum;
            r = i;
        }
    }
    p.first = l + 1;
    p.second = r;
    sum = maxsum;
    return p;
}
using namespace std;
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
        int sum = 0;
        pair<int, int> ind = kadane(a, sum);
        // cout << ind.first << "   " << ind.second;
        int sumofb=0;
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] > 0)
                sumofb += b[i];
        }

        if (ind.first == 0 || ind.second == a.size() - 1)
        {
            cout << sum + sumofb<<endl;

            continue;
        }
        else
        {
            int suml = 0, sumr = 0;
            for (int i = 0; i < ind.first; i++)
                suml += a[i];

            for (int i = ind.second; i < b.size(); i++)
                sumr += a[i];

            if (suml > sumr)
            {
                if (sumofb > suml)
                    cout << sum + sumofb + suml;
                else
                    cout << sum;
                    
            }
            else
            {
                if (sumofb > sumr)
                    cout << sum + sumofb + sumr;
                else
                    cout << sum;
            }
        }
        cout << endl;
    }
    return 0;
}