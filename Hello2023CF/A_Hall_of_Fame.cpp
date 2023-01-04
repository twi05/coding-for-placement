#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        bool found = false;

        for (int i = 0; i < s.length() - 1; i++)
        {
           
            if (s.substr(i, 2) == "RL")
            {
              cout << "0";
                found = true;

                break;
            }
             if (s.substr(i, 2) == "LR")
            {
                  cout << i + 1;
                found = true;
                break;
            }
           
        }
        if (found == false)
            cout << -1;
        cout << "\n";
    }
    return 0;
}