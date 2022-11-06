#include <bits/stdc++.h>
using namespace std;
#define double int
int pow(int a, int b)
{

    if (b == 0)
        return 1;

    cout << "pow" << a << "," << b / 2 << endl;
    int X = pow(a, b / 2);
    if (b % 2 == 0)
        return X * X;
    else
        return X * X * a;
}

int powIterative(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {

        if (b % 2 == 1)
            ans *= a;
        b = b >> 1;
        a = a * a;
    }
    return ans;
}

#define N 150
#include <vector>
void fillPrimes(vector<int> &b)
{
    for (int i = 1; i < N; i++)
        b[i] = 1;
    for (int i = 2; i < N; i++)
    {
        if (b[i] == 1)
        {
            for (int j = i * i; j * j <= N; j += i)
                b[j] = 0;
        }
    }
}
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
int main()
{
    vector<int> b(N);
    fillPrimes(b);
    cout<<endl;
    for (int i = 0; i < 15; i++)
    {
        cout << b[i] << " ";
    }

    SieveOfEratosthenes(30);
    // cout << powIterative(2, 25);
    return 0;
}