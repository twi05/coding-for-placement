#include <iostream>
using namespace std;
int main()
{
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (x >= 67 && x <= 45000)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}