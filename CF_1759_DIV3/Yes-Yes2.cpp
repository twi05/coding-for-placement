
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int index;
        string s = "";
        for (int i = 0; i < 20; i++)
            s += "Yes";
        if ((index = s.find(str, 0)) == string::npos)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}