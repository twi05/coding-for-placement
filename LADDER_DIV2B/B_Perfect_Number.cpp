#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int cal(int n)
{
    int ans = 0;
    while (n)
    {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n)
    {
        ans++;
        if (cal(ans) == 10 )
        {
            n--;
        }
    }
    cout<<ans;
    return 0;
}