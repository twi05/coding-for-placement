#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n >> s;
        ll count = 0;

        for (ll i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                if (i == n - 1)
                {
                    while (1)
                    {
                        if (i >= 0 && s[i] == '1')
                            i--;
                        else
                            break;
                    }
                }
                else
                {
                    count++;
                    while (1)
                    {
                        if (i >= 0 && s[i] == '1')
                            i--;
                        else
                            break;
                    }
                }
            }
        }
        cout<<count<<endl;
    }

    return 0;
}