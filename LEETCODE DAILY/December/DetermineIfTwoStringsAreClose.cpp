#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool closeStrings(string word1, string word2)
{
    if (word1.length() != word2.length())
        return false;

    set<char> s;
    for (int i = 0; i < word1.length(); i++)
        s.insert(word1[i]);

    for (int i = 0; i < word1.length(); i++)
        if (s.find(word2[i]) == s.end())
            return false;

    vector<int> v;
}
int main()
{

    return 0;
}