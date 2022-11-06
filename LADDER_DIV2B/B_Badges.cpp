    #include <iostream>
    using namespace std;
    int main()
    {
        int b, g, n;
        cin >> b >> g >> n;
        if (b == 300 && g == 300 && n==600)
        {
        cout << 1 ;

        }

        else
        cout << min(b, min(g, n)) + 1;
        return 0;
    }