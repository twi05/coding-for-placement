#include <iostream>
using namespace std;
int main()
{
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (x >100)
            cout << x-10;
        else
            cout << x;
        cout << endl;
    }
    return 0;
}