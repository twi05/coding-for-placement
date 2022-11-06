#include <iostream>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    cin>>t;
    while (t--)
    {
        ll  a, b;
      
 
        cin>>a>>b;
        if (float(b / 2) >= a || b%a==0 || a==1)
        {
            cout << "YES";
        }
        else
            cout << "NO";
        cout<<endl;
    }
    return 0;
}