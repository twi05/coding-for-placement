#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
  int sumSubarrayMins(vector<int>& arr) {
          stack<int> st;
            int ans = 0;

            int n = arr.size();
            for (int i = 0; i <= arr.size(); i++)
            {
                while (!st.empty() && (i == n || arr[st.top()] >= arr[i]))
                {
                    int idx = st.top();
                    st.pop();

                    long right = i < n ? i - idx : n - idx;
                    long left = st.empty() ? idx + 1 : idx - st.top();

                    ans = (ans + left *right *arr[idx]) % mod;
                }
                st.push(i);
            }

            return ans;
        }
    
int main(){

return 0;
}