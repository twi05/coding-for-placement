#include <iostream>
using namespace std;
int main()
{
    int t, n, x, countneg = 0;
    cin >> t;
    bool zero = false;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x < 0)
            {
                countneg++;
            }
            if (x == 0)
            {
                zero = true;
            }
        }
        if (zero || countneg % 2 == 0)
            cout << 0 << endl;
        else
            cout << 1 << endl;

        zero = false;
        countneg = 0;
    }

    return 0;
}


