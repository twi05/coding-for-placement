    #include <iostream>
    using namespace std;
    int main()
    {
        int a, b;
        int t;
        cin >> t;
        while (t--)
        {
            cin >> a >> b;
            int slices = a * b;
            if (slices == 0)
                cout << 0;
            else if (slices <= 4)
            {
                cout << 1;
            }
            else
            {
                if(slices%4==0)
                cout <<slices/4  ;

                else if(slices%4>0)
                cout <<slices/4 + 1 ;

            }
            cout << endl;
        }
        return 0;
    }