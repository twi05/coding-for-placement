#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    if (x >= 2 * y)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}