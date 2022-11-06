#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long t, a, b, mini, maxi, temp;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        mini = min(a, b);
        maxi = max(a, b);
        temp = mini;

        for (long long i = 1; i < 21; i += 2)
        {
            temp/=i;
            
             while (1)
            {
                temp *= temp;
                if (temp >= maxi)
                    break;
            }

            if (temp == maxi)
                cout << "YES";
            else
                cout << "NO";
            cout << endl;
        }
    }

    return 0;
}
