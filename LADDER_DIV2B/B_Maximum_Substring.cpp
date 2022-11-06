#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n;
    string s;

    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        ll c0 = 0, c1 = 0, total0 = 0, total1 = 0;
        bool c0going = false, c1going = false;
        ll maxc0 = 0, maxc1 = 0;
        if (s[0] == '0')
            c0going = true;
        if (s[0] == '1')
            c1going = true;
        for (int i = 0; s[i]; i++)
        {
            if (s[i] == '0')
            {c0going = true;
                c1going = false;
                if (c0going)
                {
                    c0++;
                    maxc0 = max(c0, maxc0);
                }
                
                total0++;
                c1=0;
            }
            if (s[i] == '1')
            {   c1going = true;
                c0going = false;
                if (c1going)
                {
                    c1++;
                    maxc1 = max(c1, maxc1);
                }
             
                total1++;
                c0=0;
            }
        }
//    cout<<"Max 0  "<<maxc0<<" "<<endl;
//    cout<<"Max 1  "<<maxc1<<" "<<endl;
//    cout<<"Total 0  "<<total0<<" "<<endl;
//    cout<<"Total 1  "<<total1<<" "<<endl;
            cout << max(total0 * total1,max(maxc0 * maxc0, maxc1 * maxc1));
        
        cout << endl;
    }
    return 0;
}