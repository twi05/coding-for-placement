#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool checkwordexist(map<string, char> m, string word)
{

    for (map<string, char>::iterator it = m.begin(); it != m.end(); ++it)
    {
        if (it->first == word)
            return true;
    }
    return false;
}
bool wordPattern(string pattern, string s)
{
    int spointer = 0;
    int ppointer = 0;

    set<char> pset;
    map<string, char> m;
    int totalwords =0;
    for (ppointer; pattern[ppointer]; ppointer++)
    {

        string word;
        while (s[spointer] != ' ' && spointer != s.length())
        {
            word += s[spointer];
            spointer++;
        }
        if (spointer != s.length())
            spointer++;

        if (pset.count(pattern[ppointer]) == 0)
        {
            if (checkwordexist(m, word) && ppointer>0)
            {

                cout << "yes";
                cout << "\n"
                     << word;
                     cout<<ppointer<<endl;

                return false;
            }
            else
            {
                pset.insert(pattern[ppointer]);
                m[word] = pattern[ppointer];
            }
            cout << m[word] << endl;
        }
    
        else
        {
            if (m[word] != pattern[ppointer])
                return false;
        }

        if(word.length()>0)
        totalwords++;
    }

    if (spointer != s.length() || totalwords!=pattern.length())
    {
        return false;
    }
    return true;
}

int main()
{
    cout << wordPattern("he", "dog");
    return 0;
}

bool wordPattern2(string pattern, string s)
{

    // if (s[i] == ' ')
    //     continue;

    set<char> pset;
    for (int i = 0; pattern[i]; i++)
    {
        pset.insert(pattern[i]);
    }

    for (int i = 0; s[i]; i++)
    {
        cout << s[i] << endl;
        bool found = false;
        int j = 0;

        while (s[i] != ' ')
        {
            if (pset.count(s[i]) > 0)
                found = true;
            i++;
        }
        if (found == false)
            return false;
        i++;
    }
    return true;
}