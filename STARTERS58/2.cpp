#include <iostream>
using namespace std;
#include <math.h>
#define long long int
int main()
{
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        int y = x / 25;

        if(x%25==0)
            cout<<y<<endl;
        else 
        cout<<y+1<<endl;
    }
    return 0;
}