#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n, k, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ll index = -1;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            if (x == k && index<0)
                index = i;
        }
        if(n==1 && index>=0)
        {
            cout<<"Yes"<<endl;
        }
       else if (index == -1 || index == n - 1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    return 0;
}