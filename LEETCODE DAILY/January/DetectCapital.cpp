#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool detectCapitalUse(string word)
{

    int totalCapital = 0;

    for (auto c : word)
    {
        if (c >= 'A' && c <= 'Z')
            totalCapital++;
    }
    if (totalCapital == 0 || totalCapital == word.length())
        return true;

    if (totalCapital == 1 && word[0] >= 'A' && word[0] <= 'Z')
        return true;

    return false;
}
int main()
{

    return 0;
}