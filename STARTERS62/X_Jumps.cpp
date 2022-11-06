#include<iostream>
using namespace std;
int main(){
int t,x,y;
cin>>t;
while(t--)
{
    cin>>x>>y;
    
    cout<<x/y + max(x%y,0)<<endl;
}
return 0;
}