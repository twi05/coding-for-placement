#include <iostream>
#include<vector>
using namespace std;
#define long long int
int main()
{
bool zero=false;
    int t, n, x,totalNeg=0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];

        }

           for (int i = 0; i < n; i++)
        {
            if(v[i]==0){
                zero =true;
                break;
            }
            else if(v[i]<0)
            totalNeg++;

        }
        if(zero || totalNeg%2==0)
        cout<<0<<endl;
        else{
            cout<<1<<endl;
        }

        zero = false;
        totalNeg=0;
        v.clear();
    }
    return 0;
}