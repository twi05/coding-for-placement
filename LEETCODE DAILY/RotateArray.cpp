#include <iostream>
#include<vector>
using namespace std;
int main()
{
   int  k = 3;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    k = k % nums.size();
    int temp;
    vector<int> v(nums.size());
    for (int i = 0; i < k; i++)
    {
        temp = nums[0];
        for (int j = 0; j < nums.size() - 1; j++)
        {
            v[j + 1] = nums[j];
            temp = nums[j + 1];
        }
        v[0] = temp;
           for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = v[i];
    }

  }

    return 0;
}