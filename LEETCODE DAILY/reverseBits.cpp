#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        vector<int> v(32);
        int temp;
        while (n)
        {
            temp = n % 10;
            v.emplace_back(temp);
            n /= 10;
        }
        uint32_t ten = 1;
        for (int i = 0; i < 32; i++)
        {
            temp = v[i] * ten;
            n+=temp;
            ten *= 10;
        }

        return n;
        
    }
};

int main()
{

    return 0;
}