#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b;
    bool case1 = false, case2 = false;
    while (t--)
    {
        cin >> a >> b;
        if (a > b)
            case1 = true;
        if (b > a)
            case2 = true;
    }
    if (case1 && case2)
        cout << "Happy Alex";
    else
        cout << "Poor Alex";
    cout << endl;
    return 0;
}