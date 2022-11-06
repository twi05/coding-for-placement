#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define ll long long
int main()
{
    map<ll, ll> m;
    vector<ll> v;
    ll n, x;
    cin>>n;
    while (n--)
    {
        cin >> x;
        if (m[x])
        {
            m[x]++;
        }
        else
        {
            m[x] = 1;
            v.push_back(x);
        }
    }
    cout<<v.size()<<endl;
    for (int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}