#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ll t;
cin>>t;
    vector<int>v(3);
while(t--)
{
    for(int i=0;i<3;i++)
    cin>>v[i];
    sort(v.begin(),v.end());
    cout<<v[1]<<endl;
}
return 0;
}