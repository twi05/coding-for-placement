#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int x = a + b + c, y = b + c, z = c;
        cout << x << " " << y << " " << z << endl;
    }
}