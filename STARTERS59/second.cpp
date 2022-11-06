#include <iostream>
using namespace std;
int main()
{
    int t, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;

        if (x >= y)
        {
            if (x >= z)
                cout << "Setter";
            else
                cout << "Editorialist";
        }
        else
        {
            if (z > y)
            {
                cout << "Editorialist";
            }
            else
                cout << "Tester";
        }
        cout << endl;
    }
    return 0;
}