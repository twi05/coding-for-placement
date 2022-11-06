#include <iostream>
using namespace std;
int main()
{
    long long i, j, t;
    cin >> t;

    while (t--)
    {
        cin >> i >> j;
        if ((i % 2 != 0 && j % 2 != 0 ) || i==j || j==1)   
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    return 0;
}