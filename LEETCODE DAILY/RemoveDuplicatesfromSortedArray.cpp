#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

return 0;
}

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0,prev=INT_MAX;

        for(j=0;j<nums.size();j++)
        {
            if(prev!=nums[j])
        {    nums[i]=nums[j];
        prev = nums[j];
            i++;}
        }
        return i;
        }
    };