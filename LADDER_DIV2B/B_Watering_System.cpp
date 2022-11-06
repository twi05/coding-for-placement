#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b,x;
    cin >> n >> a >> b;
    
    cin >> x;
    n--;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
        sum += v[i];
    sum +=x;
    int j = 0;
    sort(v.begin(), v.end());
    reverse(v.begin(),v.end());
    while (((x * a) / sum) < b)
    {

        sum -= v[j];
        j++;
        count++;
    }
    cout << count;
    return 0;
}
