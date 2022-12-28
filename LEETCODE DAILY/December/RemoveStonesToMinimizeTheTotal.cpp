#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(auto p : piles) pq.push(p);
        while(k--) {
            int n = pq.top();
            pq.pop();
            pq.push(n - n / 2);
        }
        int sum = 0;
        while(pq.size()) {
            sum += pq.top(); pq.pop();
        }
        return sum;
    }

int main()
{

    return 0;
}