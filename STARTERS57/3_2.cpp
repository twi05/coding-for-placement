#include <iostream>
using namespace std;
int main()
{
    int t, n, x,ans=1;
    cin>>t;

    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            // if (x < 0)
            // {
            //     countneg++;
            // }
            // if(x==0){
            //     zero=true;
            // }
            ans*=x;
        }
        if(ans>=0)
        cout<<0<<endl;
        else 
        cout<<1<<endl;
        ans=1;
    }

    return 0;
}
