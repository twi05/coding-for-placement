#include <iostream>
using namespace std;
int main()
{

    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool flag = 0;
        int i;
        for (i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] != ')')
            {
                flag = 1;
            }
        }
        if (flag)
        {
            if (s.length() - i > i)
                cout << "No";
            else
                cout << "Yes";
        }
        else
        {
            cout << "Yes";
        }

        cout << endl;
    }
    return 0;
}