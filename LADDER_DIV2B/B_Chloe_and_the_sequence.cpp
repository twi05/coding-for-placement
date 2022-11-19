#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    
    ll n, k;
    cin >> n >> k;

    ll l = 1;
    ll r = (1LL<<n) - 1LL;
    ll mid;
    while (l <= r)
    {
        mid = r - (r - l) / 2LL;
        if (mid == k)
        {
            cout<<n;
            return 0;
        }
        else if (mid < k)
            l = mid + 1LL;
        else
            r = mid - 1LL;
        n--;
    }
    cout<<n<<endl;
}
int main2()
{
    ll n, k;
    cin >> n >> k;
    string s = "1";
    int count = 2;
    for (int i = 0; i < n - 1; i++)
    {
        s += to_string(count) + s;
        count++;
    }
    cout << s;
    cout << s[k - 1];
    return 0;
}

/*Not sure this is an answer. Just another relevant observation while talking about all things binary :P But the answer can be obtained by binary-searching the index k in the range [1,2^n — 1] and decrementing the answer variable by 1 at each "step".(answer is initially n). We see an obvious analogue coz for any n, the value n is at the "mid" of the sequence. Formally, the answer somehow depends on the number of comparisons a binary search would do, in order to hit index k in the range [1,2^n — 1] See submission for clarity



Woah, that's pretty awesome! How did this solution strike you? What was your initial thought? I find that such solutions are really unintuitive :/


For me, I realized it in this way:

Tried to obtain the first occurrence of k -> Realized it is related to 2^x -> noticed that they appears on a fixed interval -> try for some more corner cases -> code it*/