#include <iostream>
using namespace std;
int main()
{

    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin>>n;
        if(n==1 || n==2)
        cout<<0;
        else {
            if(n&1 == 1){
                cout<<n/2;
            }
            else{
                cout<<n/2-1;
            }
        }
        cout<<endl;
    }
    
    
    
    return 0;
}