#include <iostream>
using namespace std;
int main()
{
    long long i, j, t, n, x;
    cin >> t;

    while (t--)
    {
        cin >> n;
        string s;
        cin>>s;
        int count0 = 0, count1 = 0;
        for (int i = 0; s[i]; i++)
        {
            if (s[i] == '0')
                count0++;
            else
                count1++;
        }

        if ((count0 % 2 != 0 && count1 % 2 != 0) || (count0==1 && count1==1))
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
