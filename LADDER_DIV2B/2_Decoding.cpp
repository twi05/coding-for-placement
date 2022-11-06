#include <iostream>
using namespace std;
int main()
{
    string s;
    string ans;
    int n;
    cin >> n >> s;
    ans += s[0];
   
    while (--n)
    {
        s = s.substr(1); 
        if (n % 2 == 0)
            ans = s[0] + ans;

        else
            ans = ans + s[0];

    }
    cout<<ans;
    return 0;
}