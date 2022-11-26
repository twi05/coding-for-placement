#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;
 
    long long arr[m] = {0,};
    long long sum = 0;
 
    for (int i = 0; i < n; i++) {
        long long counter = 0;
        for (int j = 0; j < m; j++) {
            long long temp;
            cin>>temp;
            if (temp == 1) {
                counter++;
                arr[j]++;
            }
        }
 
        sum += (powl(2, counter) - 1);
        sum += (powl(2, m - counter) - 1);
    }
 
    for (int i = 0; i < m; i++) {
        sum += (powl(2, arr[i]) - 1);
        sum += (powl(2, n - arr[i]) - 1);
    }
    cout<< sum - n * m << endl;
    return 0;
}