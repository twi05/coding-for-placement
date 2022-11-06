#include <iostream>
using namespace std;
int main()
{
    float a, b, x, y;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> x >> y;
        float time1 = x / a;
        float time2 = y / b;
        if (time1 == time2)
            cout << "both";
        else if (time1 > time2)
            cout << "chef";
        else
            cout << "chefina";
        cout << endl;
    }
    return 0;
}