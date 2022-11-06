//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends




void fN( deque<long long> &q, int &ele)
{
    if(q.empty()){
        ele = 0;
        return;
    }
    else{
        if(q.front() <0){
            
            ele = q.front();
           return;
        }
        else{
            int e = q.front();
            q.pop_front();
            fN(q, ele);
            q.push_front(e);
        }
    }
    
}


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
         deque<long long> q;
         vector<long long> res;
         int ele;
         for(int i=0;i<K;i++){
             q.push_back(A[i]);
         }
         for(int i=K;i<N-K+1;i++){
             fN(q,ele);
             res.push_back(ele);
             q.pop_front();
             q.push_back(A[i]);
         }
         return res;
 }