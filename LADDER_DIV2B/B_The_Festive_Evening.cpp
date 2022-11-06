    #include <bits/stdc++.h>
    using namespace std;
    int main()

    {
        map<char, int> mp;
        map<char, int> lastind;
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        for (int i = n - 1; i >= 0; i--)
        {
            if (mp[s[i]])
            {
                mp[s[i]]++;
            }
            else
            {
                mp[s[i]] = 1;
            }
            if (lastind[s[i]])
            {
            }
            else
                lastind[s[i]] = i;
        }

        int gateOpen = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (lastind[s[i]] == i)
            {
                gateOpen++;
            }
            mp[s[i]]--;
            
            if (gateOpen > k)
            {
                cout << "YES";
                return 0;
            }
            if (mp[s[i]] == 0)
            {
                gateOpen--;
                // cout << "Gate closed " << s[i] << endl;
            }
        }

        cout << "NO";

        return 0;
    }