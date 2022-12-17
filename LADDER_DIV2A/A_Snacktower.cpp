#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, x;
    cin >> n;
    ll pos = n;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        pq.push(x);

        while (pq.top() == pos)
        {
            cout <<pq.top()  << " ";
            pos--;
            pq.pop();
        }
        cout<<"\n";
    }
    return 0;
}