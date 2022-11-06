#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{

    string strinp;
    vector<vector<char>> v(4, vector<char>(4));
    for (int i = 0; i < 4; i++)
    {
        cin >> strinp;
        for (int j = 0; j < strinp.length(); j++)
        {

            v[i][j] = strinp[j];
        }
        strinp.clear();
    }
    int dot = 0, hash = 0;
    for (int k = 0; k < 3; k++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                for (int l = 0; l < 2; l++)
                {
                    if (v[j+k][l+i] == '#')
                        hash++;
                    if (v[j+k][l+i] == '.')
                        dot++;

                }
            
            }
            if ( dot >= 3 || hash >= 3)
            {
                cout << "YES";
                return 0;
               
            }
            dot = 0;
            hash = 0;
        }
    }

    cout << "NO";
    return 0;
}
