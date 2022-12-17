#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a;
    cin >> a;

    map<int, int> m;
    vector<int> arr(a);

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }

    sort(arr.begin(), arr.end());
    if (arr[0] != arr[a - 1])
        cout << a - m[arr[0]] - m[arr[a - 1]];
    else
        cout << a - m[arr[0]];

    return 0;
}