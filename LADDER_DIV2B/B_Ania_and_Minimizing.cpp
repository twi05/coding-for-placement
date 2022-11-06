#include <iostream>
using namespace std;

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;

    if (n == 1 && s[0] == '0')
    {
    }
    else if (n == 1 && k > 0)
    {
        s[0] = '0';
         k--;
    }

    else if (s[0] != '1' && k > 0)
    {
        s[0] = '1';
        k--;
    }

    for (int i = 1; i <= k && s[i]; i++)
    {
        if (s[i] != '0')
        {
            s[i] = '0';
        }
        else
        {
            k++;
        }
    }
    cout << s;
    return 0;
}
