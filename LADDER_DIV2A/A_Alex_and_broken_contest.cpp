#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin >> s;

    int countOcc = 0;
    string substring;

    string arr[5] =["Danil", "Olya" , ]
    for (int i = 0; i < s.length(); i++)
    {
        if (s.length() - i >= 5)
        {
            substring = s.substr(i, 5);
            if (substring == "Danil")
                countOcc += 1;
        }
        if (s.length() - i >= 4)
        {
            substring = s.substr(i, 4);
            if (substring == "Olya")
                countOcc += 1;
        }
        if (s.length() - i >= 5)
        {
            substring = s.substr(i, 5);
            if (substring == "Slava")
                countOcc += 1;
        }
        if (s.length() - i >= 3)
        {
            substring = s.substr(i, 3);
            if (substring == "Ann")
                countOcc += 1;
        }
        if (s.length() - i >= 6)
        {
            substring = s.substr(i, 6);
            if (substring == "Nikita")
                countOcc += 1;
        }


    }

    if (countOcc > 1 || countOcc == 0)
        cout << "NO";

    else
        cout << "YES";

    return 0;
}