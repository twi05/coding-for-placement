#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, tomake;
    cin >> n >> tomake;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int medianInd = (n)/2;
    int count=0;
    while(v[medianInd]!=tomake && medianInd>=0 && medianInd<n) 
    {
        if(v[medianInd]<tomake)
        {
            count+=tomake -v[medianInd] ;
            medianInd++;
        }
        else if(v[medianInd]>tomake){
             count+=v[medianInd] -tomake  ;
            medianInd--;
        }
    }
    cout<<count;
    return 0;
}
