#include <iostream>
using namespace std;
void oper(string s)
{
    for (int i = 1; s[i]; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
}
int main()
{
    string s;
    cin >> s;
    // if ((s[0] >= 'a' && s[0] <= 'z')  && (s[1] >= 'A' && s[1] <= 'Z'))
    // s[0] = s[0] - 32;
    bool change = true;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            change = false;
    }
    if (change)
    {
        s[0] = s[0] - 32;
        oper(s);
    }

    cout << s;
    return 0;
}