#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    string s;
    while (t--)
    {
        bool flag = false;
        cin >> s;
        if (s.length() == 1 && (s[0] == 'Y' || s[0] == 's' || s[0] == 'e'))
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            if (s.length() == 1)
            {
                cout << "NO" << endl;
                continue;
            }
        }
        for (int i = 0; i < s.length(); i++)
        {

            if ( (i == s.length() - 1) && (s.length() & 1 == 1))
            {
                i--;
            }
       

             if ((s.substr(i, 2) == "Ye" || s.substr(i, 2) == "sY" || s.substr(i, 2) == "es"))
            {
                cout<<s.substr(i,2)<<endl;
            }  
            
            else
            {
                cout << "NO" << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << "YES" << endl;
    }
    return 0;
}