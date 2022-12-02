#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool closeStrings(string word1, string word2)
{
    if (word1.length() != word2.length())
        return false;

    // set<char> s;
    // for (int i = 0; i < word1.length(); i++)
    //     s.insert(word1[i]);

    // for (int i = 0; i < word1.length(); i++)
    //     if (s.find(word2[i]) == s.end())
    //         return false;

    map<char, int> m;
    map<char, int> m2;

    for (int i = 0; i < word1.length(); i++)
    {
        m[word1[i]]++;
        m2[word2[i]]++;
    }

    if (m.size() != m2.size())
        return false;

    for (auto i = m.begin(), j = m2.begin(); i != m.end(), j != m2.end(); i++, j++)
        if (i->first != j->first)
            return false;

    // for (int i = 0; i < word1.length(); i++)
    //     if (s.find(word2[i]) == s.end())
    //         return false;

    vector<int> v1;
    vector<int> v2;

    for (auto i = m.begin(); i != m.end(); i++)
        v1.push_back(i->second);

    for (auto i = m2.begin(); i != m2.end(); i++)
        v2.push_back(i->second);

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for (int i = 0; i < v1.size(); i++)
        if (v1[i] != v2[i])
            return false;

    return true;
}

 bool closeStrings(string word1, string word2) {
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        set<char>s1,s2;
        if(word1.size() != word2.size()) return 0;
        
        for(int i=0;i<word1.length();i++){
            s1.insert(word1[i]);
            s2.insert(word2[i]);
            
           v1[word1[i]-'a']++;
            v2[word2[i]-'a']++;
        }
        sort(begin(v1),end(v1));
        sort(begin(v2),end(v2));
        if(v1 == v2 && s1 == s2) return 1;
        return 0;
        
    }