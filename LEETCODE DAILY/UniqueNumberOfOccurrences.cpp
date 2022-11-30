#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool uniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> mp;
    unordered_set<int> s;
    for (int i = 0; i < arr.size(); i++)
        mp[arr[i]]++;
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        if (s.count(i->second) > 0)
            return false;
        
        s.insert(i->second);
    }
    return true;
}
bool uniqueOccurrencesOLD(vector<int> &arr)
{
    unordered_map<int, int> mp;
    unordered_set<int> s;
    for (int i = 0; i < arr.size(); i++)
        mp[arr[i]]++;
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        if (s.count(i->second) > 0)
            return false;
        
        s.insert(i->second);
    }
    return true;
}
int main()
{

    return 0;
}