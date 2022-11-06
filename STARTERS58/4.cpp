#include <iostream>
using namespace std;
#include <map>
int main()
{
    long long t, x, n, even = 0, odd = 0, countone = 0;
    cin >> t;
    
    while (t--)
    {

        cin >> n;
        for (long long i = 0; i < n; i++)
        {
            cin >> x;
            if (x == 1)
            {
                countone++;
            }
            if (x & 1 == 1)
                odd++;
            else
                even++;
        }
        odd -= countone;
        if (odd == n || even == n || countone == n)
            cout << 0;
        else
            cout << even;
        cout << endl;
        even = 0, odd = 0, countone = 0;
    }
    return 0;
}