#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,count=1;
        string s;
        cin >> n >> s;

        for (int i = 1; s[i]; i++)
        {
            if (s[i] == '0')
              count++;
            else
                break;
              
        }
        cout<<count<<endl;
    }

    return 0;
}