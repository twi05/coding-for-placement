#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int x;
    int i, j;
    while (t--)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            cout << 2 << " " << x << endl;
        }
        else
        {
            cout << 2 << " " << x - 1<< endl;
        }
    }
    return 0;
}