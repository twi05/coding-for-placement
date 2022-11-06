#include <iostream>
using namespace std;
int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int temp = n;
        int count = 0;
        while (n >= k)
        {
            count++;
            n -= k;
        }
        if ((temp / k) > 1)
        {
            count *= (temp / k);
        }

        cout << count<< endl;
    }
    return 0;
}