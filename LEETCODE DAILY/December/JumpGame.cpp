#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool canJump(vector<int>& nums) 
{
    int max_jump_index = 0;
    
    for (int i = 0; i < nums.size(); i++)
    {
        max_jump_index = max(nums[i] + i, max_jump_index);
        if (max_jump_index < i + 1)
            break;
    }
    
    return max_jump_index >= nums.size() - 1;
}
int main(){

return 0;
}