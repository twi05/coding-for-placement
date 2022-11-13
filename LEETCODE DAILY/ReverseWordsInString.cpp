#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string reverseWords(string s);
int main()
{
    cout << reverseWords("ff");
    return 0;
}

string reverseWords(string s)
{
    string res;
    string temp;
    int i = 0;
    int firstword = true;
    while (s[i])
    {

        if (s[i] != ' ')
        {
            temp += s[i];
        }
        else
        {
            if (temp.length() > 0)
            {
                if (!firstword)
                {
                    res = ' ' + res;
                }
                firstword = false;

                res = temp + res;
                temp.clear();
            }
        }

        i++;
    }
    if (temp.length() > 0)
    {

        if (!firstword)
        {
            res = ' ' + res;
        }
        res = temp + res;
    }
    cout << res.length() << endl;
    return res;
}
