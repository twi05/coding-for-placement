#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;

    vector<int> v(n);
    for (i = 0; i < n; i++)
        cin >> v[i];

    i = 0;
    while (i <= n - i - 1)
    {
        swap(v[i], v[n - i - 1]);
        i++;
        // if (n %2 == 0)
            i++;
    }

    for (i = 0; i < n; i++)
        cout << v[i] << " ";

    return 0;
}