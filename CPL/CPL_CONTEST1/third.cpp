#include <iostream>
#include <set>
using namespace std;
#define ll long long
int main()
{
    set<int> s;
    ll n;
    cin >> n;
    int x;
    while (n--)
    {
        cin >> x;
        s.insert(x);
    }
    cout<<s.size()<<endl;
    for (auto i=s.begin(); i!=s.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}