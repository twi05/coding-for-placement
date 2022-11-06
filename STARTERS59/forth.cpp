#include <iostream>
using namespace std;
int main()
{
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        int l = 0;
        int r = s.length() - 1;
        string t;
        while (l <= r)
        {
            if (s[l] == '0')
            {
                t = '0' + t;
            }
            else
            {
                t = t + '1';
            }
            l++;
            if (l <= r)
            {
                if (s[r] != '0')
                {
                    t = '1' + t;
                }
                else
                {
                    t = t + '0';
                }
                r--;
            }
        }
        cout << t << endl;
    }
    return 0;
}