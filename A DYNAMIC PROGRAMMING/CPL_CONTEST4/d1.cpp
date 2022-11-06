#include <bits/stdc++.h>
using namespace std;
int n;
string s;
bool check(int x)
{

    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (s[i] - '0');
        if (sum == x)
        {

            sum = 0;
            cnt++;
        }
        else if (sum > x)
        {

            return false;
        }
    }
    if (sum != 0)
        return false;
    if (cnt >= 2)
        return true;
    else
        return false;
}
int main()
{
    cin >> n >> s;
    int num = n * 9;
    for (int i = 0; i <= num; i++)
    {
        if (check(i))
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
