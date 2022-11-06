#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        string s;
        cin >> n;
        cin >> s;
        ll i = 0;
ll count=0;
        if (n == 1)
        {
            cout << "NO";
        }
        else if (n == 2)
        {
            if (s[0] == '0' && s[1] == '1')
                cout << "NO";
            else if (s[0] == '1' && s[1] == '0')
            {
                cout << "NO";
            }
            else{
                cout<<"YES";
            }
        }
        else
        {
           for(int i=0;i<n-1;i+=2)
           {
            if(s[i] == s[i+1])
            {
                count++;
            }
           }

            if (count == (n+1)/2 || count==n/2)
                cout << "YES";
            else
                cout << "NO";
        }
        cout << endl;
    }

    return 0;
}