#include <iostream>
using namespace std;
int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        int c = 0;
        for (int i = 0; s[i]; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                c++;
                if (c > 2)
                    break;
                continue;
            }
            else
                c = 0;
        }
        if (c > 2)
            cout << "Happy";
        else
            cout << "Sad";

        cout << endl;
    }
    return 0;
}