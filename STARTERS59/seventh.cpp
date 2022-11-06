#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int j = 0; j < k; j++)
        {
            int count0 = 0;
            for (int i = 0; s[i]; i++)
            {
                if (s[i] == '1')
                {
                    s[i] = '0';
                    if (i > 0)
                        s[i - 1] = '1';
                    if (i < n - 1)
                        s[i + 1] = '1';
                }
                if (s[i] == '0')
                    count0++;
            }
            bool alternate = false;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                }
            }
            
        }
    }

    return 0;
}