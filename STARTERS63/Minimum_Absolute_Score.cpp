#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s, t;
        cin >> s >> t;
        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] < t[i])
                count += t[i] - s[i];
            else
                count += 26 - (s[i] - t[i]);
        }
        ll x = count/26;
        ll ans1 = count  - (x*26);
        ll ans2 = count - ((x+1)*26);
        ans2=-ans2;
        cout<<min(ans1,ans2)<<endl;
    }
    return 0;
}




int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a, b;
	    cin>>a>>b;
	    int ans = 0;
	    for(int i = 0; i < n; i++){
	        int s1 = 0, s2 = 0;
	        if(b[i]-a[i] > 0){
	            s1 = (b[i]-a[i]);
	            s2 = -(26 - s1);
	        }
	        else if(b[i]-a[i]<0){
	            s2 = -(a[i] - b[i]);
	            s1 = 26 + s2;
	        }
	        if(abs(ans + s1) < abs(ans + s2)){
	            ans += s1;
	        }
	        else{
	            ans += s2;
	        }
	    }
	    cout<<abs(ans)<<"\n";
	}
	return 0;
}