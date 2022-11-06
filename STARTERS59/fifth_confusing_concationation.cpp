#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int maxnum = INT_MIN;
        cin >> n;
        vector<int> v(n);
        int x, ind;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v[i] = x;
            if (x > maxnum)
            {
                maxnum = x;
                ind = i;
            }
        }
        if (ind == 0)
        {
            cout << -1 << endl;
            continue;
        }
        cout << ind<<endl;
        for (int i = 0; i < ind; i++)
        {
            cout << v[i] << " ";
                 
        } cout<<endl;
        cout << n - ind<<endl;
        for (int i = ind; i < n; i++)
        {
            cout << v[i] << " ";
                 
        }
        cout<<endl;
    }

    return 0;
}