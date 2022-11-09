
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class StockSpanner
{

    stack < pair<int, int> >st;
public
    StockSpanner()
    {
    }

public
    int next(int price)
    {

        int count = 0;
        
        while(!st.empty() && st.top.first<=price)
        {
            count+=st.top.second;
            st.pop();
        }
        count++;
        st.push({price,count});

        return count;
    }
}

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner obj = new StockSpanner();
 * int param_1 = obj.next(price);
 */
int
main()
{

    return 0;
}