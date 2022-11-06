#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    ll a, i,j;
    cin >> a;
    string n = to_string(a);
    string ans;
    bool t = true;
cout<<"converted string"<<n;
    for (i = 0; i < n.length(); i++)
    {
        if (n[i] == '0')
        {
            t = false;
            break;
        }
        ans += n[i];
    }

    if (t)
        ans = ans.substr(0, ans.size());
    else
    {
        for (j= i + 1; j < n.length(); j++)
        {

            ans += n[j];
        }
    }
    cout << ans;
    return 0;
}