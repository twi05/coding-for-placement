#include <iostream>
using namespace std;
int main()
{
    int n, l, r;
    cin >> n >> l >> r;

    int sum = 1, min = 1;

    for (int i = 1; i < l; i++)
    {
        min *= 2;
        sum += min;
    }
    cout << sum + (n - l) << " ";

    min = 1;
    sum = 1;
    for (int i = 1; i < r; i++)
    {
        min *= 2;
        sum += min;
    }
    cout << sum + (n - r) * min;

    return 0;
}