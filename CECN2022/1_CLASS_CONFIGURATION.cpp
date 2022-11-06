    #include <iostream>
    #include <vector>
    using namespace std;
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            bool flag = 0;
            int n;
            cin >> n;
            vector<string> v(n);
            for (int i = 0; i < n; i++)
            {
                cin >> v[i];
            }

            for (int i = 0; i < n; i++)
            {
                if (v[i][0] == '-' && v[i][1]== '-')
                {
                    v[i].at(0) = 'O';
                    v[i].at(1) ='O';
                    flag = 1;
                }
                else if (v[i].at(3) == '-' && v[i].at(4) == '-' && !flag)
                {
                    v[i].at(3) = 'O';
                    v[i].at(4) = 'O';
                    flag = 1;
                }
                if (flag)
                {
                    cout << "YES" << endl;
                    for (int i = 0; i < n; i++)
                    {
                        cout<<v[i]<<endl;
                    }
                    break;
                }
            
            }
            if (!flag)
                {
                    cout << "NO" << endl;
                }
        }
            return 0;
        
    }