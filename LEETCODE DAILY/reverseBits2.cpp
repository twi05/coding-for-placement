#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    uint32_t reverseBits(uint32_t n) {
        bitset<32>b(n);
        int l=0,r=31;

        while(l<r){
            bool temp = b[l];
            b[l++] = b[r];
            b[r--] = temp;
        }

        return b.to_ulong();

        
    }
};
int main(){

return 0;
}