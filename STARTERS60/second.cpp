#include <iostream>
using namespace std;
int main()
{
    float t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        float percent = (x * 0.5);
        if (y >= percent)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}