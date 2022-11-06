#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{

    string strinp;
    vector<vector<char>> v(4,vector<char>(4));
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
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (v[i][j] == '#')
                hash++;
            if (v[i][j] == '.')
                dot++;
        }
        if ((dot - hash == 1) || dot == 4 || hash == 4)
        {
            cout << "YES";
            return 0;
        }
        dot = 0;
        hash = 0;
    }

    cout << "NO";
    return 0;
}